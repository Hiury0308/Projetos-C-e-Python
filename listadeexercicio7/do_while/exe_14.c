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
    do
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
            printf("ain joaquim. Restam %d tentativas.\n", 5 - tentativas);
        }
    } while(tentativas < 5 && !logado);

    //saída para o usuário
    if(logado)
    {
        printf("usuario logado\n");
    }
    else
    {
        printf("usuario bloqueado\n");
    }

    return 0;
}
