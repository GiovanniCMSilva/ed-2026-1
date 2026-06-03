#include <stdio.h>
#include <stdlib.h>
#include "listaLinear.h"

Lista *listaCriar() {
    Lista *lista = (Lista *)malloc(sizeof(Lista));

    if (lista == NULL){
        return NULL;
    }
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->quant = 0;
    return lista;
}

void listaDestruir(Lista *lista) {
    No *atual = lista->primeiro;
    while (atual != NULL) {
        No *prox = atual->prox;
        free(atual);
        atual = prox;
    }
    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->quant = 0;
}

int listaEstaVazia(Lista *lista) {
    return lista->primeiro == NULL;
}

void listaInserir(Lista *lista, int n) {
    No *no = (No *)malloc(sizeof(No));
    if (no == NULL)
        return;
    no->dado = n;
    no->prox = NULL;
    if (listaEstaVazia(lista)) {
        lista->primeiro = no;
    } else {
        lista->ultimo->prox = no;
    }
    lista->ultimo = no;
    lista->quant++;
}

No *listaBuscar(Lista *lista, int n) {
    No *atual = lista->primeiro;
    while (atual != NULL) {
        if (atual->dado == n)
            return atual;
        atual = atual->prox;
    }
    return NULL;
}

void listaRemover(Lista *lista, int n) {
    if (listaEstaVazia(lista))
        return;
    No *atual = lista->primeiro;
    No *anterior = NULL;
    if (atual->dado == n) {
        lista->primeiro = atual->prox;
        if (lista->primeiro == NULL){
            lista->ultimo = NULL;
        }
        free(atual);
        lista->quant--;
        return;
    }
    while (atual != NULL && atual->dado != n) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == NULL){
        return;
    }
    anterior->prox = atual->prox;
    if (atual == lista->ultimo){
        lista->ultimo = anterior;
    }
    free(atual);
    lista->quant--;
}

void listaExibir(Lista *lista) {
    No *atual = lista->primeiro;
    while (atual != NULL) {
        printf("%d -> ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}