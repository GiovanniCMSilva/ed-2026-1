#ifndef PILHA_H
#define PILHA_H

typedef struct No {
    int dados;
    struct No *prox;
} No;

typedef struct {
    No *topo;
    int quant;
} Pilha;

Pilha *pilhaCriar();
int pilhaEstaVazia(Pilha *pilha);
No *pilhaTopo(Pilha *pilha);
void pilhaEmpilha(Pilha *pilha, int n);
void pilhaDesempilha(Pilha *pilha);
void pilhaDestruir(Pilha *pilha);
void pilhaExibir(Pilha *pilha);

#endif 