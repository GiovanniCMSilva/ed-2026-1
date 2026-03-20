#include<stdio.h>
#include<stdlib.h>

float IMC(float altura, float peso){
    if(altura==0 || peso==0){
        return 0;
    }
    return peso/(altura*altura);
}
int main(){
    float imc = 0.0f;
    imc = IMC(0.0f, 0.0f);
    printf("Altura = 0, Peso = 0, IMC = %.2f => %i\n", imc, imc==0);
    imc = IMC(0.0f, 50.0f);
    printf("Altura = 0, Peso = 50, IMC = %.2f => %i\n", imc, imc==0);
    imc = IMC(1.75f, 0.0f);
    printf("Altura = 1.75, Peso = 0, IMC = %.2f => %i\n", imc, imc==0);
    imc = IMC(1.75f, 50.0f);
    printf("Altura = 1.75, Peso = 50, IMC = %.2f => %i\n", imc, imc<18.5f);
    imc = IMC(1.75f, 65.0f);
    printf("Altura = 1.75, Peso = 65, IMC = %.2f => %i\n", imc, imc>=18.5f && imc<25);
    imc = IMC(1.75f, 85.0f);
    printf("Altura = 1.75, Peso = 85, IMC = %.2f => %i\n", imc, imc>=25 && imc<30);
    imc = IMC(1.75f, 95.0f);
    printf("Altura = 1.75, Peso = 95, IMC = %.2f => %i\n", imc, imc>=30);
    return 0;
}