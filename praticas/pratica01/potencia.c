#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(){
    float base;
    int expo;
    float potencia;
    printf("Insira o valor da base: ");
    scanf("%f",&base);
    while(1){
        printf("Insira o valor do expoente, e necessario que seja positivo e inteiro: ");
        scanf("%i",&expo);
        if(expo>=0){
            break;
        }
        printf("O numero inserido nao e positivo. Por favor, insira novamente.\n");
    }
    potencia = pow(base, expo);
    printf("A potencia de %.2f elevado a %i e de %.2f", base, expo, potencia);

    return 0;
}