#include <stdio.h>

int main(void) {
    char palavra[30];
    int contador = 0;

    printf("Digite uma palavra: ");
    scanf("%29s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }

    printf("A palavra tem %d letras.\n", contador);

    return 0;
}
