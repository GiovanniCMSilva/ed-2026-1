#include <stdio.h>
#include "listaLinear.h"

int main() {
    Lista *l = listaCriar();

    listaInserir(l, 10);
    listaInserir(l, 20);
    listaInserir(l, 40);
    listaInserir(l, 80);

    printf("Lista criada:\n");
    No *no = l->primeiro;
    while (no != NULL) {
        printf("%d -> ", no->n);
        no = no->prox;
    }
    printf("\n");

    No *b = listaBuscar(l, 20);
    if (b != NULL)
        printf("Foi encontrado: %d\n", b->n);
    else
        printf("Nao foi encontrado\n");

    printf("Removendo 40...\n");
    listaRemover(l, 40);

    no = l->primeiro;
    while (no != NULL) {
        printf("%d -> ", no->n);
        no = no->prox;
    }
    printf("\n");

    printf("Removendo 10...\n");
    listaRemover(l, 10);

    no = l->primeiro;
    while (no != NULL) {
        printf("%d -> ", no->n);
        no = no->prox;
    }
    printf("\n");

    listaDestruir(l);

    if (listaVazia(l)){
        printf("Lista vazia\n");
    } else{
        printf("Lista nao esta vazia\n");
    }

    return 0;
}