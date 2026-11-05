#include <stdio.h>
#include <string.h>

int main()
{
    //Declaração das variaveis
    char nome[100], senha[100], sexo[10];
    int idade, continuar;

    // Inicialização das variaveis
    continuar = 1;

    //processamento
    while(continuar)
    {
        printf("Digite o nome: ");
        scanf("%99s", nome);

        printf("Digite a idade: ");
        if(scanf("%d", &idade) != 1)
        {
            printf("Entrada invalida.\n");
            while(getchar() != '\n');
            continue;
        }

        printf("Digite o sexo: ");
        scanf("%9s", sexo);

        printf("Digite a senha: ");
        scanf("%99s", senha);

        //saída para o usuário
        printf("\n--- Dados do usuario ---\n");
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Sexo: %s\n", sexo);
        printf("------------------------\n\n");

        //condição de parada
        if(strcmp(nome, "fds") == 0 && strcmp(senha, "43aB") == 0 && strcmp(sexo, "K") == 0)
        {
            printf("fds 2.\n");
            continuar = 0;
        }
        else
        {
            printf("Proximo.\n\n");
        }
    }

    return 0;
}