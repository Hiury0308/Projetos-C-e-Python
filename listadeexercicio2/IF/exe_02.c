#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Saída para o usuário
    if (numero < 10)
        printf("%.0f é menor que dez", numero);

    return 0;
}
