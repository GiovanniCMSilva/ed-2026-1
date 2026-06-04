#ifndef FILA_H
#define FILA_H

typedef struct No{
    int dados;
    struct No *prox;
} No;

typedef struct{
    No *primeiro;
    No *ultimo;
    int quant;
} Fila;

Fila *criarFila();
void filaEnfileirar(Fila *fila, int n);
void filaDesenfileirar(Fila *fila);
No *filaInicio(Fila *fila);
void filaExibir(Fila *fila);
int filaEstaVazia(Fila *fila);
void filaDestruir(Fila *fila);

#endif