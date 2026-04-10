#include<stdio.h>
#include<time.h>

void doisLacos(int m[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            m[i][j]++;
        }
    }
}
void unicoLaco(int m[10][10]){
    for(int k = 0; k < 100; k++){
        int i = k / 10;
        int j = k % 10;
        m[i][j]++;
    }
}

int main(){
    int m[10][10] = {0};

    clock_t tempoInicial, tempoFinal;
    double duracao;

    tempoInicial = clock();
    doisLacos(m);
    tempoFinal = clock();

    duracao = (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC;
    printf("Tempo com dois lacos (10x10): %.8f segundos\n", duracao);

    tempoInicial = clock();
    unicoLaco(m);
    tempoFinal = clock();

    duracao = (double)(tempoFinal - tempoInicial) / CLOCKS_PER_SEC;
    printf("Tempo com um laco (10x10): %.8f segundos\n", duracao);

    printf("\n=== Análise da Complexidade ===\n");
    printf("Dois laços: O(n²) — percorre todos os 100 elementos da matriz.\n");
    printf("Um laço:   O(n²) — também percorre todos os 100 elementos.\n");


    return 0;
}