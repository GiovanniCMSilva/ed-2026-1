#include<stdio.h>
#include<stdlib.h>

float mediaAritmetrica(int n[], int count){
    if (count == 0){
        return 0;
    }
    int soma=0;
    for(int i=0; i<count; i++){
        if(n[i] > 100){
            return 0;
        }
        soma+=n[i];
    }
    return (float)soma/count;
}

int main(){
    int n1[]={10, 20, 15, 14, 58, 38, 24, 19, 41, 11};
    int n2[]={20, 10, 35, 25, 70, 90, 40, 10};
    int n3[]={0, 110, 870, 30, 50};
    int n4[]={};
    int count=0;
    float media=0;
    
    count = 10;
    media = mediaAritmetrica(n1, count);
    printf("Quant. Numeros = 10, Soma = 250, Media = %.2f => %i\n", media, media==25);
    count = 8;
    media = mediaAritmetrica(n2, count);
    printf("Quant. Numeros = 8, Soma = 300, Media = %.2f => %i\n", media, media==37.5f);
    count = 5;
    media = mediaAritmetrica(n3, count);
    printf("Quant. Numeros = 5, Soma = 1060, Media = %.2f => %i\n", media, media==0);
    count = 0;
    media = mediaAritmetrica(n4, count);
    printf("Quant. Numeros = 0, Soma = 0, Media = %.2f => %i\n", media, media==0);
    

    return 0;
}