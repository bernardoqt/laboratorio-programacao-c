#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];
    char tipoCategoria[20];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf("%49s", produto);

    printf("Categoria: ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(tipoCategoria, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(tipoCategoria, "Periferico");
    } else {
        strcpy(tipoCategoria, "Invalida");
    }

    strcpy(copia, produto);

    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));
    printf("Categoria: %s\n", tipoCategoria);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
