#include <stdio.h>
#include "fila.h"

int main() {

    Fila *f = criarFila();

    filaEnfileirar(f, 10);
    filaEnfileirar(f, 25);
    filaEnfileirar(f, 40);
    filaEnfileirar(f, 36);

    filaExibir(f);

    printf("Inicio da fila: ");
    No *inicio = filaInicio(f);
    if (inicio != NULL) {
        printf("%d\n", inicio->dados);
    } else {
        printf("Fila vazia\n");
    }

    printf("Desenfileirando um valor\n");
    filaDesenfileirar(f);
    filaExibir(f);

    printf("Enfileirando o valor 29\n");
    filaEnfileirar(f, 29);
    filaExibir(f);

    if (filaEstaVazia(f)) {
        printf("A fila esta vazia\n");
    } else {
        printf("A fila nao esta vazia\n");
    }

    filaDestruir(f);
    f = NULL;

    if (f == NULL) {
        printf("A fila foi destruida\n");
    }

    return 0;
}
