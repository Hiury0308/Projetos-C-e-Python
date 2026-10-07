#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float valor_a, valor_b, auxiliar;

    // Proteção inicial contra lixo de memória
    auxiliar = 0;

    // Recebimento dos dados pelo usuário
    printf("Digite o valor de A: ");
    scanf("%f", &valor_a);
    printf("Digite o valor de B: ");
    scanf("%f", &valor_b);

    // Processamento para troca dos valores
    auxiliar = valor_a;
    valor_a = valor_b;
    valor_b = auxiliar;

    // Saída do resultado
    printf("Valor A: %f\n", valor_a);
    printf("Valor B: %f\n", valor_b);

    return 0;
}
