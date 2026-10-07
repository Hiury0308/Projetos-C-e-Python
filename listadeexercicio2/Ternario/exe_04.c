#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero_1, numero_2, numero_3;

    // Recebimento dos valores pelo usuário
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero_2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero_3);

    // Saída para o usuário usando ternário
    numero_1 + numero_2 < numero_3 ? printf("ok") : printf("Não OK");

    return 0;
}
