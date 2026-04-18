#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define SIZE 100

int main() {
    int original[SIZE], teste[SIZE];
    clock_t inicio, fim;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        original[i] = rand() % 1000;
    }
    int valor = 5;
    int procura;

    // Teste Linear
    inicio = clock();
    procura = linearSearch(original, SIZE, valor-1);
    fim = clock();
    printf("Linear Search: O %do menor numero e o %d | Tempo: %.6f\n", valor, procura, (double)(fim-inicio)/CLOCKS_PER_SEC);

    // Teste Quick Select
    for(int i=0; i<SIZE; i++) teste[i] = original[i];
    inicio = clock();
    procura = quickSelect(teste, 0, SIZE - 1, valor);
    fim = clock();
    printf("Quick Select: O %do menor numero e o %d | Tempo: %.6f\n", valor, procura, (double)(fim-inicio)/CLOCKS_PER_SEC);

    return 0;
}