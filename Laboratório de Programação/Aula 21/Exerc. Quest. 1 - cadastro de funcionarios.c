#include <stdio.h>

int main(void) {
    FILE *arquivo;
    char nome[50];
    int matricula;
    int quantidade;

    printf("Quantos funcionarios deseja cadastrar (ate 5)? ");
    scanf("%d", &quantidade);

    if (quantidade < 1 || quantidade > 5) {
        printf("Quantidade invalida! Digite de 1 a 5.\n");
        return 1;
    }

    arquivo = fopen("funcionarios.txt", "w");

    if (arquivo == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("\n--- FUNCIONARIO %d ---\n", i);

        printf("Nome: ");
        scanf(" %49[^\n]", nome);

        printf("Matricula: ");
        scanf("%d", &matricula);

        fprintf(arquivo, "FUNCIONARIO: %s\n", nome);
        fprintf(arquivo, "Matricula: %d\n\n", matricula);
    }

    if (fclose(arquivo) != 0) {
        perror("Erro ao salvar os dados");
        return 1;
    }

    printf("\nDados gravados com sucesso em funcionarios.txt!\n");

    return 0;
}
