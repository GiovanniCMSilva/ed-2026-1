#include <stdio.h>
#include "pilha.h"

int main() {

    Pilha *p = pilhaCriar();

    pilhaEmpilha(p, 10);
    pilhaEmpilha(p, 25);
    pilhaEmpilha(p, 40);
    pilhaEmpilha(p, 36);

    pilhaExibir(p);

    printf("Topo da pilha: ");
    No *t = pilhaTopo(p);
    if (t != NULL){
        printf("%d\n", t->dados);
    } else{
        printf("Pilha vazia\n");
    }
    printf("Desempilhando um valor\n");
    pilhaDesempilha(p);
    pilhaExibir(p);

    printf("Empilhando o valor 29\n");
    pilhaEmpilha(p,29);
    pilhaExibir(p);

    if (pilhaEstaVazia(p)){
        printf("A pilha esta vazia\n");
    } else{
        printf("A pilha nao esta vazia\n");
    }

    printf("Destruindo pilha\n");
    pilhaDestruir(p);

    return 0;
}