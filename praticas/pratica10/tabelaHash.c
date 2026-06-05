#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tabelaHash.h"

int calcularHash(int n, int tam) {
    return n % tam;
}

Hash *hashCriar(int tam) {
    Hash *hash = (Hash *)malloc(sizeof(Hash));
    if (hash == NULL){
        return NULL;
    }
    hash->dados = (No **)malloc(sizeof(No*) * tam);
    if (hash->dados == NULL) {
        free(hash);
        return NULL;
    }
    memset(hash->dados, 0, sizeof(No*) * tam);
    hash->quant = 0;
    hash->tam = tam;
    return hash;
}

void hashDestruir(Hash *hash) {
    if (hash == NULL){
        return;
    }
    for (int i = 0; i < hash->tam; i++) {
        No *atual = hash->dados[i];
        while (atual != NULL) {
            No *prox = atual->prox;
            free(atual);
            atual = prox;
        }
    }
    free(hash->dados);
    free(hash);
}

void hashInserir(Hash *hash, int n) {
    if (hash == NULL){
        return;
    }
    int indice = calcularHash(n, hash->tam);
    No *no = (No *)malloc(sizeof(No));
    no->dado = n;
    no->prox = hash->dados[indice];
    hash->dados[indice] = no;
    hash->quant++;
}

int hashBuscar(Hash *hash, int n) {
    if (hash == NULL) return 0;
    int indice = calcularHash(n, hash->tam);
    No *no = hash->dados[indice];
    while (no != NULL) {
        if (no->dado == n)
            return 1;
        no = no->prox;
    }
    return 0;
}

void hashRemover(Hash *hash, int n) {
    if (hash == NULL){
        return;
    }
    int indice = calcularHash(n, hash->tam);
    No *no = hash->dados[indice];
    No *anterior = NULL;
    while (no != NULL) {
        if (no->dado == n) {
            if (anterior == NULL){
                hash->dados[indice] = no->prox;
            } else{
                anterior->prox = no->prox;
            }
            free(no);
            hash->quant--;
            return;
        }
        anterior = no;
        no = no->prox;
    }
}

int hashEstaVazia(Hash *hash) {
    return hash == NULL || hash->quant == 0;
}

void hashExibir(Hash *hash) {
    if (hashEstaVazia(hash)) {
        printf("Tabela hash vazia\n");
        return;
    }
    for (int i = 0; i < hash->tam; i++) {
        printf("[%d] -> ", i);
        No *no = hash->dados[i];
        while (no != NULL) {
            printf("%d -> ", no->dado);
            no = no->prox;
        }
        printf("\n");
    }
}