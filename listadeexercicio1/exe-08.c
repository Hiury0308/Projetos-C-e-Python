#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int dias_trabalhados, valor_bruto, valor_desconto;

    // Recebimento da quantia de dias
    printf("Digite a quantia de dias trabalhados: ");
    if (scanf("%d", &dias_trabalhados) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Operações matemáticas
    valor_bruto = dias_trabalhados * 30;
    valor_desconto = valor_bruto / 10;

    // Saída para o usuário
    printf("Valor total: R$%d\n", valor_bruto);
    printf("Valor do desconto: R$%d\n", valor_desconto);
    printf("Valor pós-desconto: R$%d\n", valor_bruto - valor_desconto);

    return 0;
}
