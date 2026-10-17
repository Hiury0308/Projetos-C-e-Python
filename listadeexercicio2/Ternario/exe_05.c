#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int numero_1, numero_2, resultado;

    // Recebimento dos valores pelo usuário
    printf("Digite o primeiro numero: ");
    if (scanf("%d", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if (scanf("%d", &numero_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída para o usuário com ternário
    resultado = numero_1 == numero_2 ? numero_1 + numero_2 : numero_1 * numero_2;
    printf("Conta: %d", resultado);

    return 0;
}
