#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero1, numero2, resto;

    printf("Digite o primeiro numero: ");
    if(scanf("%d", &numero1) != 1)
    {
        printf("Entrada invalida. Digite um numero valido.\n");
        return 1;
    }

    printf("Digite o segundo numero: ");
    if(scanf("%d", &numero2) != 1)
    {
        printf("Entrada invalida. Digite um numero valido.\n");
        return 1;
    }

    //operação de proteção para garantir que o primeiro número seja maior que o segundo
    if(numero1 < numero2)
    {
        printf("O primeiro numero deve ser maior que o segundo.\n");
        return 1;
    }

    //processamento
    resto = numero1;
    while(resto >= numero2)
    {
        resto -= numero2;
    }

    //saída para o usuário
    printf("O resto da divisao entre %d e %d eh %d.\n", numero1, numero2, resto);

    return 0;
}