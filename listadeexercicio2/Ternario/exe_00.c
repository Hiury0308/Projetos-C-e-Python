#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero_1, numero_2;

    // Recebimento dos valores pelo usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero_2);

    // Saída para o usuário usando ternário
    printf("%.0f", numero_1 > numero_2 ? numero_1 : numero_2);

    return 0;
}
