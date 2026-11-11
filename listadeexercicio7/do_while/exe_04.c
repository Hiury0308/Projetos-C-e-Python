#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero = 1, caractere;

    //processamento
    do
    {
        printf("Digite um numero (0 para sair): ");
        if(scanf("%d", &numero) != 1)
        {
            printf("Entrada invalida.\n");
            do
            {
                caractere = getchar();
            } while(caractere != '\n' && caractere != EOF);
            numero = 1;
            continue;
        }

        if(numero != 0)
        {
            printf("O numero digitado foi %d.\n", numero);
        }
    } while(numero != 0);

    //saída para o usuário
    printf("Zero.\n");

    return 0;
}
