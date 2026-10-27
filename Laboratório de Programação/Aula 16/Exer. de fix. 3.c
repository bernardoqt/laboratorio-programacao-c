#include <stdio.h>

int main(void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%29s", palavra);

    printf("Primeiro caractere: %c\n", palavra[0]);

    return 0;
}
