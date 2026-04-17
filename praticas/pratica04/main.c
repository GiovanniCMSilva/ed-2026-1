#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "ordenacao.h"
#define SIZE 100

void copiaVetor(int origem[], int destino[], int n) {
    memcpy(destino, origem, n * sizeof(int));
}

int main() {
    int original[SIZE], teste[SIZE];
    clock_t inicio, fim;
    double tempo;

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        original[i] = rand() % 1000;
    }

    // --- Teste Bubble Sort ---
    copiaVetor(original, teste, SIZE);
    inicio = clock();
    bubbleSort(teste, SIZE);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Bubble Sort: %.10f segundos\n", tempo);

    // --- Teste Selection Sort ---
    copiaVetor(original, teste, SIZE);
    inicio = clock();
    selectionSort(teste, SIZE);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Selection Sort: %.10f segundos\n", tempo);

    // --- Teste Quick Sort ---
    copiaVetor(original, teste, SIZE);
    inicio = clock();
    quickSort(teste, 0, SIZE - 1);
    fim = clock();
    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;
    printf("Quick Sort: %.10f segundos\n", tempo);

    return 0;
}