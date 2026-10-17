#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero: ");
    if (scanf("%f", &numero) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída para o usuário usando ternário
    numero > 100 ? printf("%.0f", numero) : printf("0");

    return 0;
}
