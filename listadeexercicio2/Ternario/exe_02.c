#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Saída para o usuário usando ternário
    numero <= 10 ? printf("%.0f", numero) : printf("não");

    return 0;
}
