#include <stdio.h>
#include "tabelaHash.h"

int main() {

    Hash *h = hashCriar(7);

    hashInserir(h, 7);
    hashInserir(h, 14);
    hashInserir(h, 23);
    hashInserir(h, 43);
    hashInserir(h, 5);

    printf("\nExibindo tabela: \n");
    hashExibir(h);


    if (hashBuscar(h, 23)) {
        printf("Encontrado o numero 23\n");
    } else {
        printf("Nao encontrado o numero 23\n");
    }

    if (hashBuscar(h, 45)) {
        printf("Encontrado o numero 45\n");
    } else {
        printf("Nao encontrado o numero 45\n");
    }

    printf("Removendo 14:\n");
    hashRemover(h, 14);
    hashExibir(h);

    if (hashEstaVazia(h)) {
        printf("A tabela hash esta vazia\n");
    } else {
        printf("A tabela hash nao esta vazia\n");
    }

    hashDestruir(h);
    h = NULL;
    printf("Tabela destruida\n");

    return 0;
}