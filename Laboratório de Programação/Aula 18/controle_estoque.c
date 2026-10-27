#include <stdio.h>

int dobro(int quantidade) {
    return quantidade * 2;
}

int main(void) {
    int inicial;

    printf("===== CONTROLE DE ESTOQUE =====\n\n");

    printf("Quantidade inicial: ");
    scanf("%d", &inicial);

    printf("\nQuantidade apos duplicacao: %d\n", dobro(inicial));

    return 0;
}
