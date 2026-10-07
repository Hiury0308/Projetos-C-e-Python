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

    // Saída para o usuário
    if (numero_1 > numero_2)
        printf("Ordem crescente: \n%.0f\n%.0f", numero_2, numero_1);
    else if (numero_1 < numero_2)
        printf("Ordem crescente: \n%.0f\n%.0f", numero_1, numero_2);
    else
        printf("numeros iguais, operação invalida");

    return 0;
}
