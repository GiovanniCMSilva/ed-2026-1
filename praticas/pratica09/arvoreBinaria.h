#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct No{
    int dado;
    struct No *esq;
    struct No *dir;
} No;

typedef struct{
    No *raiz;
} Arvore;


Arvore *arvoreCriar(int n);
void arvoreInserir(Arvore *arvore, int n);
void arvorePreOrdem(Arvore *arvore);
void arvoreEmOrdem(Arvore *arvore);
void arvorePosOrdem(Arvore *arvore);
int arvoreEstaVazia(Arvore *arvore);
void arvoreDestruir(Arvore *arvore);

#endif