#include <stdio.h>
#include <stdlib.h>
#include "arvoreBinaria.h"

static No *criarNo(int n){
    No *no = malloc(sizeof(No));
    no->dado = n;
    no->esq = NULL;
    no->dir = NULL;
    return no;
}

Arvore *arvoreCriar(int n){
    Arvore *arvore = malloc(sizeof(Arvore));
    arvore->raiz = criarNo(n);
    return arvore;
}

void arvoreInserir(Arvore *arvore, int n){
    if(arvore->raiz == NULL){
        arvore->raiz = criarNo(n);
        return;
    }
    No *no = arvore->raiz;
    if(n < no->dado){
        if(no->esq == NULL){
            no->esq = criarNo(n);
        } else {
            Arvore temp = {
                no->esq
            };
            arvoreInserir(&temp, n);
        }
    }
    else if(n > no->dado){
        if(no->dir == NULL){
            no->dir = criarNo(n);
        } else {
            Arvore temp = {
                no->dir
            };
            arvoreInserir(&temp, n);
        }
    }
}

void arvorePreOrdem(Arvore *arvore){
    if(arvore->raiz == NULL){
        return;
    }
    No *no = arvore->raiz;
    printf("[%d] ", no->dado);
    if(no->esq != NULL){
        Arvore temp = {
            no->esq
        };
        arvorePreOrdem(&temp);
    }
    if(no->dir != NULL){
        Arvore temp = {
            no->dir
        };
        arvorePreOrdem(&temp);
    }
}

void arvoreEmOrdem(Arvore *arvore){
    if(arvore->raiz == NULL){
        return;
    }
    No *no = arvore->raiz;
    if(no->esq != NULL){
        Arvore temp = {
            no->esq
        };
        arvoreEmOrdem(&temp);
    }
    printf("[%d] ", no->dado);
    if(no->dir != NULL){
        Arvore temp = {
            no->dir
        };
        arvoreEmOrdem(&temp);
    }
}

void arvorePosOrdem(Arvore *arvore){
    if(arvore->raiz == NULL){
        return;
    }
    No *no = arvore->raiz;
    if(no->esq != NULL){
        Arvore temp = {
            no->esq
        };
        arvorePosOrdem(&temp);
    }
    if(no->dir != NULL){
        Arvore temp = {
            no->dir
        };
        arvorePosOrdem(&temp);
    }
    printf("[%d] ", no->dado);
}

void destruirNos(No *no){
    if(no == NULL){
        return;
    }
    destruirNos(no->esq);
    destruirNos(no->dir);
    free(no);
}

void arvoreDestruir(Arvore *arvore){
    destruirNos(arvore->raiz);
    free(arvore);
}


int arvoreEstaVazia(Arvore *arvore){
    return arvore->raiz == NULL;
}