#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Saída para o usuário
    if (numero > 100)
        printf("%.0f", numero);
    else
        printf("0");

    return 0;
}
