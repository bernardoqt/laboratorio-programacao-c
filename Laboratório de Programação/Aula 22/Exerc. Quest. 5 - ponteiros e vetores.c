#include <stdio.h>

int main(void) {
    int numeros[5];
    int *p = numeros;

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n===== NUMEROS DIGITADOS =====\n");

    for (int i = 0; i < 5; i++) {
        printf("Numero %d: %d\n", i + 1, *(p + i));
    }

    return 0;
}
