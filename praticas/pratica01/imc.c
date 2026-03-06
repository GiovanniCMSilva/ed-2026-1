#include<stdio.h>
#include<stdlib.h>

int main(){
    float altura;
    float peso;
    float imc;
    while(1){
        printf("Insira a sua altura (m): ");
        scanf("%f",&altura);
        printf("Agora, insira o seu peso (Kg): ");
        scanf("%f",&peso);
        if(altura!=0 && peso!=0){
            break;
        }
        printf("Altura e/ou peso nao foram inseridos. Por favor, insira os dados.\n");
    }
    printf("==========================================\n");
    imc = peso/(altura*altura);
    if(imc<18.5){
        printf("Voce esta abaixo do peso.");
    } else if(imc<25 && imc>=18.5){
        printf("Voce esta com peso normal.");
    } else if(imc<30 && imc>=25){
        printf("Voce esta com sobrepeso.");
    } else{
        printf("Voce esta obeso.");
    }
    return 0; 
}