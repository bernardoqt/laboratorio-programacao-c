#include <stdio.h>

int main(void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%29s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}
