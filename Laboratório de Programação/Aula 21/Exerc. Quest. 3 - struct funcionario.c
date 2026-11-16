#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main(void) {
    FILE *arquivo;
    Funcionario f;
    int opcao;
    int quantidade;
    int caractere;

    do {
        printf("\n===== CADASTRO DE FUNCIONARIOS =====\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Visualizar funcionarios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Opcao invalida!\n");
            return 1;
        }

        if (opcao == 1) {
            printf("\nQuantos funcionarios deseja cadastrar (ate 5)? ");
            scanf("%d", &quantidade);

            if (quantidade < 1 || quantidade > 5) {
                printf("\nQuantidade invalida! Digite de 1 a 5.\n");
            } else {
                arquivo = fopen("funcionarios.txt", "a");

                if (arquivo == NULL) {
                    perror("Erro ao abrir arquivo");
                } else {
                    for (int i = 1; i <= quantidade; i++) {
                        printf("\n--- FUNCIONARIO %d ---\n", i);

                        printf("Nome: ");
                        scanf(" %49[^\n]", f.nome);

                        printf("Salario: ");
                        scanf("%f", &f.salario);

                        printf("Horas extras: ");
                        scanf("%d", &f.horasExtras);

                        fprintf(arquivo, "FUNCIONARIO: %s\n", f.nome);
                        fprintf(arquivo, "Salario: R$ %.2f\n", f.salario);
                        fprintf(arquivo, "Horas extras: %d\n\n", f.horasExtras);
                    }

                    if (fclose(arquivo) != 0) {
                        perror("Erro ao salvar os dados");
                    } else {
                        printf("\nFuncionarios cadastrados com sucesso!\n");
                        printf("Dados salvos em funcionarios.txt\n");
                    }
                }
            }
        }

        else if (opcao == 2) {
            arquivo = fopen("funcionarios.txt", "r");

            if (arquivo == NULL) {
                printf("\nNenhum funcionario cadastrado.\n");
            } else {
                printf("\n===== FUNCIONARIOS CADASTRADOS =====\n\n");

                while ((caractere = fgetc(arquivo)) != EOF) {
                    putchar(caractere);
                }

                fclose(arquivo);
            }
        }

        else if (opcao == 0) {
            printf("\nPrograma encerrado.\n");
        }

        else {
            printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
