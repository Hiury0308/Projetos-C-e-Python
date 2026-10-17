#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero_1, numero_2;

    // Recebimento dos valores pelo usuário
    printf("Digite o primeiro numero: ");
    if (scanf("%f", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if (scanf("%f", &numero_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída para o usuário usando IF
    if (numero_1 > numero_2)
        printf("Primeiro numero é maior: %f", numero_1);
    else if (numero_1 < numero_2)
        printf("Segundo numero é maior: %f", numero_2);
    else
        printf("Numeros iguais");

    return 0;
}
