#include <stdio.h>
#include <string.h>

int main()
{
    //Declaração das variaveis
    char email[100], senha[100];
    int tentativas, logado;

    // Inicialização das variaveis
    tentativas = 0;
    logado = 0;

    //processamento
    while(tentativas < 5 && !logado)
    {
        printf("Digite o e-mail: ");
        scanf("%99s", email);

        printf("Digite a senha: ");
        scanf("%99s", senha);

        tentativas++;

        if(strcmp(email, "joaquim.ramos@gmail.com") == 0 && strcmp(senha, "kK3Kk") == 0)
        {
            logado = 1;
        }
        else
        {
            printf("Joaquim é foda silva, login errado. Restam %d tentativas.\n", 5 - tentativas);
        }
    }

    //saída para o usuário
    if(logado)
    {
        printf("usuario logado\n");
    }
    else
    {
        printf("Bloqueou agora chora pro TI bb\n");
    }

    return 0;
}