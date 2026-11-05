#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Inicialização das variaveis
    numero = 1;

    //processamento
    while(numero != 0)
    {
        printf("Digite um numero (0 para sair dessa bosta): ");
        if(scanf("%d", &numero) != 1)
        {
            printf("Entrada invalida. Digite um numero valido.\n");
            while(getchar() != '\n');
            numero = 1;
            continue;
        }

        if(numero != 0)
        {
            printf("O numero digitado foi %d.\n", numero);
        }
    }

    //saída para o usuário
    printf("Digitou zero, vou enfiar um ponteiro na bunda quando for aprender.\n");

    return 0;
}