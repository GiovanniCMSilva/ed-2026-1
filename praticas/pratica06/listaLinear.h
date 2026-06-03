#ifndef LISTA_LINEAR_H
#define LISTA_LINEAR_H

typedef struct No {
    int n;
    struct No *ant;
    struct No *prox;
} No;

typedef struct {
    No *primeiro;
    No *ultimo;
    int quant;
} Lista;

Lista *listaCriar();
void listaDestruir(Lista *lista);
void listaInserir(Lista *lista, int n);
void listaRemover(Lista *lista, int n);
No *listaBuscar(Lista *lista, int n);
int listaVazia(Lista *lista);

#endif