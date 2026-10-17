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

    // Saída para o usuário usando ternário
    numero_1 > numero_2 ? printf("Primeiro numero é maior: %f", numero_1) :
    numero_1 < numero_2 ? printf("Segundo numero é maior: %f", numero_2) :
                          printf("Numeros iguais");

    return 0;
}
