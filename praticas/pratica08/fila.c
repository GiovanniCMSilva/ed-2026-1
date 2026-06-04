#include <stdlib.h>
#include <stdio.h>
#include "fila.h"

Fila *criarFila() {
    Fila *fila = (Fila *)malloc(sizeof(Fila));

    if (fila == NULL){
        return NULL;
    }
    fila->primeiro = NULL;
    fila->ultimo = NULL;
    fila->quant = 0;
    return fila;
}

int filaEstaVazia(Fila *fila) {
    return fila == NULL || fila->primeiro == NULL;
}

void filaEnfileirar(Fila *fila, int valor) {
    No *no = (No *)malloc(sizeof(No));
    if (no == NULL) return;
    no->dados = valor;
    no->prox = NULL;
    if (filaEstaVazia(fila)) {
        fila->primeiro = no;
        fila->ultimo = no;
    } else {
        fila->ultimo->prox = no;
        fila->ultimo = no;
    }
    fila->quant++;
}

void filaDesenfileirar(Fila *fila) {
    if (filaEstaVazia(fila)){
        return;
    }
    No *no = fila->primeiro;
    fila->primeiro = no->prox;
    fila->quant--;
    if (fila->primeiro == NULL){
        fila->ultimo = NULL;
    }
    free(no);
}

No *filaInicio(Fila *fila) {
    if (filaEstaVazia(fila)){
        return NULL;
    }
    return fila->primeiro;
}

void filaExibir(Fila *fila) {
    if (filaEstaVazia(fila)) {
        printf("Fila vazia\n");
        return;
    }
    No *atual = fila->primeiro;
    printf("Fila => ");
    while (atual != NULL) {
        printf("%d -> ", atual->dados);
        atual = atual->prox;
    }
    printf("\n");
}

void filaDestruir(Fila *fila) {
    No *atual = fila->primeiro;
    while (atual != NULL) {
        No *prox = atual->prox;
        free(atual);
        atual = prox;
    }
    free(fila);
}
