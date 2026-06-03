#include <stdlib.h>
#include <stdio.h>
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


void listaInserir(Lista *lista, int n) {
    No *no = (No *)malloc(sizeof(No));
    no->n = n;
    no->prox = NULL;
    no->ant = lista->ultimo;
    if (listaVazia(lista)) {
        lista->primeiro = no;
        lista->ultimo = no;
        lista->quant++;
        return;
    }
    lista->ultimo->prox = no;
    lista->ultimo = no;
    lista->quant++;
}

void listaRemover(Lista *lista, int n) {
    if (listaVazia(lista))
        return;

    No *atual = lista->primeiro;
    while (atual != NULL) {
        if (atual->n == n) {
            if (atual->ant != NULL){
                atual->ant->prox = atual->prox;
            } else{
                lista->primeiro = atual->prox;
            }

            if (atual->prox != NULL){
                atual->prox->ant = atual->ant;
            } else{
                lista->ultimo = atual->ant;
            }
            free(atual);
            lista->quant--;
            return;
        }
        atual = atual->prox;
    }
}

No *listaBuscar(Lista *lista, int n) {
    No *atual = lista->primeiro;
    while (atual != NULL) {
        if (atual->n == n)
            return atual;
        atual = atual->prox;
    }
    return NULL;
}

int listaVazia(Lista *lista) {
    return lista->primeiro == NULL;
}