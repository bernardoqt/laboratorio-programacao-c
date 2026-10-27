#include <stdio.h>

int main(void) {
    int assentos[3][4];
    int ocupados = 0;
    int disponiveis = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Assento %d-%d (0 = disponivel, 1 = ocupado): ", i + 1, j + 1);
            scanf("%d", &assentos[i][j]);
        }
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (assentos[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }

    printf("\nAssentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}