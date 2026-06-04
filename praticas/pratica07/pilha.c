#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

Pilha *pilhaCriar() {
   Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
   if (pilha == NULL) {
     return NULL;
   }
   pilha->topo = NULL;
   pilha->quant = 0;
   return pilha;
}

int pilhaEstaVazia(Pilha *pilha) {
   return pilha != NULL && pilha->topo == NULL; 
}

No *pilhaTopo(Pilha *pilha) {
   return pilha->topo;
}

void pilhaEmpilha(Pilha *pilha, int n) {
   No *no = (No *)malloc(sizeof(No));
   if (no == NULL){
        return;
   }
   no->dados = n;
   no->prox = pilha->topo;
   pilha->topo = no;
   pilha->quant++;
}

void pilhaDesempilha(Pilha *pilha) {
    if (pilhaEstaVazia(pilha)){
        return;
    }
    No *no = pilha->topo;
    pilha->topo = no->prox;
    pilha->quant--;
    free(no);
}


void pilhaDestruir(Pilha *pilha) {
    No *atual = pilha->topo;
    while (atual != NULL) {
        No *prox = atual->prox;
        free(atual);
        atual = prox;
    }
    free(pilha);
}

void pilhaExibir(Pilha *pilha) {
    No *atual = pilha->topo;
    if (pilhaEstaVazia(pilha)) {
        printf("A pilha esta vazia\n");
        return;
    }
    printf("Pilha => ");
    while (atual != NULL) {
        printf("%d - ", atual->dados);
        atual = atual->prox;
    }
    printf("\n");
}