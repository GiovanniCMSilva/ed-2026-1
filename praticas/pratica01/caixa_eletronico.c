#include<stdio.h>
#include<stdlib.h>

int main(){
    int saque;
    int n200, n100, n50, n20, n10, n5, n2, n1;
    while (1){
        printf("Insira o valor que deseja realizar um saque: ");
        scanf("%i", &saque);
        if(saque<=1000) break;
        printf("O saque inserido ultrapassa o limite, de 1000. Por favor, insira um novo falor de saque.");
    }
    n200=saque/200;
    saque%=200;
    n100=saque/100;
    saque%=100;
    n50=saque/50;
    saque%=50;
    n20=saque/20;
    saque%=20;
    n10=saque/10;
    saque%=10;
    n5=saque/5;
    saque%=5;
    n2=saque/2;
    saque%=2;
    n1=saque;

    printf("\nA quantidade de cedulas/moedas minimas para a realizacao do saque de %i:\n", saque);
    if (n200>0) printf("%i cedulas de 200\n", n200);
    if (n10>0) printf("%i cedulas de 100\n", n100);
    if (n50>0) printf("%i cedulas de 50\n", n50);
    if (n20>0) printf("%i cedulas de 20\n", n20);
    if (n10>0) printf("%i cedulas de 10\n", n10);
    if (n5>0) printf("%i cedulas de 5\n", n5);
    if (n2>0) printf("%i cedulas de 2\n", n2);
    if (n1>0) printf("%i moedas de 200\n", n1);

    return 0;
}