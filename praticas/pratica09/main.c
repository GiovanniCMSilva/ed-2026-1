#include <stdio.h>
#include "arvoreBinaria.h"

int main(){

    Arvore *arvore = arvoreCriar(50);

    arvoreInserir(arvore, 30);
    arvoreInserir(arvore, 30);
    arvoreInserir(arvore, 70);
    arvoreInserir(arvore, 20);
    arvoreInserir(arvore, 40);
    arvoreInserir(arvore, 60);
    arvoreInserir(arvore, 80);

    printf("Pre ordem:\n");
    arvorePreOrdem(arvore);
    printf("\n");

    printf("Em ordem:\n");
    arvoreEmOrdem(arvore);
    printf("\n");

    printf("Pos ordem:\n");
    arvorePosOrdem(arvore);
    printf("\n");

    arvoreDestruir(arvore);

    return 0;
}