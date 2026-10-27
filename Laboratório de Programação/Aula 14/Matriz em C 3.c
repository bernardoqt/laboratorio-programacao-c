#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma = 0;

    // le os valores
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma = soma + matriz[i][j];
        }
    }

    printf("\nA soma dos elementos e: %d\n", soma);

    return 0;
}