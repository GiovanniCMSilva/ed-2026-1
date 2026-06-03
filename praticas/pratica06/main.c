#include <stdio.h>
#include "listaLinear.h"

int main() {
    Lista *lista = listaCriar();

    listaInserir(lista, 10);
    listaInserir(lista, 20);
    listaInserir(lista, 30);
    listaInserir(lista, 40);

    printf("Lista atual: ");
    listaExibir(lista);

    No *b = listaBuscar(lista, 20);
    if (b != NULL){
        printf("Encontrado: %d\n", b->dado);
    }
    else{
        printf("Nao encontrado\n");
    }

    printf("Removendo 30\n");
    listaRemover(lista, 30);
    listaExibir(lista);

     No *c = listaBuscar(lista, 30);
    if (c != NULL){
        printf("Encontrado: %d\n", c->dado);
    }
    else{
        printf("Nao encontrado\n");
    }

    printf("Removendo 10 (primeiro)\n");
    listaRemover(lista, 10);
    listaExibir(lista);

    printf("Removendo 40 (ultimo)\n");
    listaRemover(lista, 40);
    listaExibir(lista);

    if (listaEstaVazia(lista)) {
        printf("A lista esta vazia\n");
    } else {
        printf("A lista nao esta vazia\n");
    }

    printf("Destruindo lista\n");
    listaDestruir(lista);

    if (listaEstaVazia(lista)) {
        printf("A lista esta vazia\n");
    } else {
        printf("A lista nao esta vazia\n");
    }

    return 0;
}