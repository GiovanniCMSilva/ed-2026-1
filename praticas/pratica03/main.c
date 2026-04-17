#include <stdio.h>
#include "conta.h"

int main() {
    Conta conta = contaCriar(123, 500.0);

    printf("Saldo inicial: R$ %.2f\n => %d", contaSaldo(&conta), contaSaldo(&conta)==500.0);

    contaDepositar(&conta, 150.0);
    printf("Pos-deposito de R$150.0, valor atual: R$ %.2f\n => %d", contaSaldo(&conta), contaSaldo(&conta)==650.0);

    contaSacar(&conta, 100.0)
    printf("Pos-saque de 100.0, valor atual: R$ %.2f\n => %d", contaSaldo(&conta), contaSaldo(&conta)==550.0);

    contaDestruir(&conta);

    return 0;
}