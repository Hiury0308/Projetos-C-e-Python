#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento do valor pelo usuário
    printf("Digite um número: ");
    if (scanf("%f", &numero) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída para o usuário
    printf("O dobro do seu número é: %.1f\n", numero * 2);
    printf("A metade do seu número é: %.1f\n", numero / 2);

    return 0;
}
