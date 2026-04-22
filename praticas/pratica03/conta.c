#include <stdio.h>
#include "conta.h"

Conta contaCriar(int numero, float saldoInicial) {
    Conta c;
    c.numero = numero;
    c.saldo = saldoInicial;
    return c;
}

void contaDepositar(Conta *c, float valor) {
    if (c != NULL && valor > 0) {
        c->saldo += valor;
    }
}

int contaSacar(Conta *c, float valor) {
    if (c != NULL && c->saldo >= valor) {
        c->saldo -= valor;
        return 1;
    }
    return -1;
}

float contaSaldo(Conta *c) {
    if (c != NULL) {
        return c->saldo;
    }
    return 0.0;
}

void contaDestruir(Conta *c) {
    if (c != NULL) {
        c->numero = 0;
        c->saldo = 0.0;
    }
}