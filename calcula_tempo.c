#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Liga o cronômetro
    clock_t tempoInicial = clock();
    int soma = 10 + 20;
    //Desliga o cronômetro
    clock_t tempoFinal = clock();

    double duracao = (double) (tempoFinal - tempoInicial)/ CLOCKS_PER_SEC;
    printf("O tempo total para executar 10 + 20 = %i foi de %.6f segundos.\n\n", soma, duracao);

    tempoInicial = clock();
    for (int i=0; i<10; i++){
        soma+=1;
    }
    tempoFinal = clock();
    duracao = (double) (tempoFinal - tempoInicial)/ CLOCKS_PER_SEC;
    printf("O tempo total para executar incrementar 1 na soma 10 vezes = %i foi de %.6f segundos.", soma, duracao);
}