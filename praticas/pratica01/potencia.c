#include<stdio.h>
#include<stdlib.h>

float potencia(float base, int expo){
    float X=1;
    if ((expo==0 && base==0)||(expo<0)){
        return 0;
    }
    while(expo>0){
        X*=base;
        expo --;
    }
    return X;
}

int main(){
    float pot = 0.0f;
    pot = potencia(0.0, 0);
    printf("Base = 0, Expoente = 0, Potencia = %.2f => %i\n", pot, pot==0);
    pot = potencia(2.0, 0);
    printf("Base = 2, Expoente = 0, Potencia = %.2f => %i\n", pot, pot==1);
    pot = potencia(0.0, 3);
    printf("Base = 0, Expoente = 3, Potencia = %.2f => %i\n", pot, pot==0);
    pot = potencia(0.0, -2);
    printf("Base = 0, Expoente = -2, Potencia = %.2f => %i\n", pot, pot==0);
    pot = potencia(2.0, 3);
    printf("Base = 2, Expoente = 3, Potencia = %.2f => %i\n", pot, pot==8);
    pot = potencia(5.0, 3);
    printf("Base = 5, Expoente = 3, Potencia = %.2f => %i\n", pot, pot==125);

    return 0;
}