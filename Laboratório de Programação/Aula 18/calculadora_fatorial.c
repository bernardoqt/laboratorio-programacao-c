#include <stdio.h>

long calcularFatorial(int n) {
    long resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nDigite um numero entre 0 e 12.\n");
        return 0;
    }

    printf("\nFatorial de %d = %ld\n", numero, calcularFatorial(numero));

    return 0;
}
