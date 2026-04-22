#ifndef CONTA_H
#define CONTA_H

typedef struct contaT {
    int numero;
    float saldo;
} Conta;

Conta contaCriar(int numero, float saldoInicial);


void  contaDepositar(Conta *c, float valor);
int   contaSacar(Conta *c, float valor);
float contaSaldo(Conta *c);
void  contaDestruir(Conta *c);

#endif