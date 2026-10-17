#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float nota_1, nota_2, nota_3, media;

    // Recebimento dos valores pelo usuário
    printf("Digite a primeira nota: ");
    if (scanf("%f", &nota_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite a segunda nota: ");
    if (scanf("%f", &nota_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite a terceira nota: ");
    if (scanf("%f", &nota_3) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Operação para chegar ao resultado
    media = (nota_1 + nota_2 + nota_3) / 3;

    // Saída com o resultado
    if (media > 6)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;
}
