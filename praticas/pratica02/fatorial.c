#include <stdio.h>
#include <stdlib.h>

unsigned long long fatorialRepeticao(int n){
    if(n < 0 || n>20){
        return -1;
    }

    unsigned long long resultado = 1;
    for(int i = 2; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

unsigned long long fatorialRecursivo(int n){
    if(n < 0 || n>20){
        return -1;
    }
    if(n == 0 || n == 1){
        return 1;
    }
    return (unsigned long long)n * fatorialRecursivo(n - 1);
}

int compara(unsigned long long obtido, unsigned long long esperado){
    return obtido == esperado;
}

int main(){

    printf("=== Fatorial Iterativo ===\n");

    unsigned long long esperado = 6;   // 3!
    unsigned long long obtido = fatorialRepeticao(3);
    printf("n = 3, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));

    esperado = 3628800; // 10!
    obtido = fatorialRepeticao(10);
    printf("n = 10, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));

    esperado = 2432902008176640000LL; // 20!
    obtido = fatorialRepeticao(20);
    printf("n = 20, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));

    esperado = -1; // 21!
    obtido = fatorialRepeticao(21);
    printf("n = 21, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));


    printf("=== Fatorial Recursivo ===\n");

    esperado = 6;   // 3!
    obtido = fatorialRecursivo(3);
    printf("n = 3, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));

    esperado = 3628800; // 10!
    obtido = fatorialRecursivo(10);
    printf("n = 10, fatorial = %llu ", obtido);
    printf("=> %d\n\n", compara(obtido, esperado));

    esperado = 2432902008176640000LL; // 20!
    obtido = fatorialRecursivo(20);
    printf("n = 20, fatorial = %llu ", obtido);
    printf("=> %d\n", compara(obtido, esperado));

    esperado = -1; // 21!
    obtido = fatorialRecursivo(21);
    printf("n = 21, fatorial = %llu ", obtido);
    printf("=> %d\n", compara(obtido, esperado));

    printf("\n=== Analise na complexidade dos 2 tipos de fatorial ===\n");
    printf("Fatorial por Repeticao:\n");
    printf("Como o algoritmo utiliza somente variaveis fixas, entao a Complexidade no Espaco = O(1)\n");
    printf("Mas, a funcao e repetida n vezes por causa do loop, entao a Complexidade no Tempo = O(n)\n\n");
    printf("Fatorial Recursivo:\n");
    printf("E necessario criar uma pilha de chamada para os fatorias anteriores, entao a Complexidade no Espaco = O(n)\n");
    printf("Alem disso, a funcaoo e chamada n vezes por causa da recurssao, entao a Complexidade no tempo = O(n)\n\n");
    
    return 0;
}