#include "ordenacao.h"

void troca(int *a, int *b) {
    int n = *a;
    *a = *b;
    *b = n;
}

void bubbleSort(int v[], int n) { // Complexidade: O(n^2)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                troca(&v[j], &v[j + 1]);
            }
        }
    }
}

void selectionSort(int v[], int n) { // Complexidade: O(n^2)
    for (int i = 0; i < n - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[menor]) {
                menor = j;
            }
        }
        troca(&v[menor], &v[i]);
    }
}

void quickSort(int v[], int inicio, int fim) { // Complexidade: O(nlogn)
    if (inicio < fim) {
        int pivo = v[fim];
        int i = (inicio - 1);

        for (int j = inicio; j < fim; j++) {
            if (v[j] <= pivo) {
                i++;
                troca(&v[i], &v[j]);
            }
        }
        troca(&v[i + 1], &v[fim]);
        int p = i + 1;

        quickSort(v, inicio, p - 1);
        quickSort(v, p + 1, fim);
    }
}