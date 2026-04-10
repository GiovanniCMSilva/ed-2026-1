#include<stdio.h>

int buscaSequencial(int vetor[], int valor){
    for(int i = 0; i < 100; i++){
        if(vetor[i] == valor){
            return i;
        }
    }
    return -1;
}

int compara(int obtido, int esperado){
    return obtido == esperado;
}

int main(){
    int vetor[100];

    for(int i = 0; i < 100; i++){
        vetor[i] = i;
    }

    // Melhor caso: valor na primeira posição
    int obtido = buscaSequencial(vetor, 0);
    printf("Teste 1 (melhor caso): %d => %d\n", obtido, compara(obtido, 0));

    // Caso médio: valor no meio
    obtido = buscaSequencial(vetor, 50);
    printf("Teste 2 (caso medio): %d => %d\n", obtido, compara(obtido, 50));

    // Pior caso: valor na última posição
    obtido = buscaSequencial(vetor, 99);
    printf("Teste 3 (pior caso): %d => %d\n", obtido, compara(obtido, 99));

    // Pior caso absoluto: valor inexistente
    obtido = buscaSequencial(vetor, 100);
    printf("Teste 4 (nao encontrado): %d => %d\n", obtido, compara(obtido, -1));

    printf("\n=== Analise da Complexidade ===\n");
    printf("Melhor caso: O(1) - Valor encontrado na primeira posicao.\n");
    printf("Pior caso: O(n) - Valor na ultima posicao e/ou inexistente.\n");

    return 0;
}