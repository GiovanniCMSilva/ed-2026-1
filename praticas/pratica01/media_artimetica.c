#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=0;
    int soma=0;
    int count=0;
    float media=0;
    char option;
    printf("Sera pedido para inserir um numero inteiro para realizar, ao final do codigo, uma media aritmetrica de todos os numeros inseridos\n");
    while(1){
        printf("Deseja continuar? (S/N)\n");
        scanf(" %c",&option);
        if(option=='N' || option=='n'){
            break;
        }
        while(1){
            printf("Insira um numero: \n");
            scanf("%i",&n);
            if(n<=100){
                soma+=n;
                count++;
                break;
            }
            printf("O numero inserido ultrapassa o valor maximo (100). Tente novamente\n");
        }
    }
    media = (float)soma / count;
    printf("\nA media aritmetrica de %i numeros inseridos e de %.2f",count, media);

    return 0;
}