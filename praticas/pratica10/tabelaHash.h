#ifndef TABELA_HASH_H
#define TABELA_HASH_H

typedef struct No {
    int dado;
    struct No *prox;
} No;

typedef struct {
    No **dados; 
    int quant;
    int tam;
} Hash;

Hash *hashCriar(int tam);
void hashDestruir(Hash *hash);
void hashInserir(Hash *hash, int n);
int hashBuscar(Hash *hash, int n);
void hashRemover(Hash *hash, int n);
int hashEstaVazia(Hash *hash);
void hashExibir(Hash *hash);

#endif