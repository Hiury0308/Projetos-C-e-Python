#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float valor_compra, valor_com_taxa;

    // Recebimento dos valores
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    // Operação necessária para o resultado
    valor_com_taxa = valor_compra + 10;

    // Saída para o usuário
    printf("O valor da compra sem taxa: R$ %.2f\n", valor_compra);
    printf("O valor da compra com taxa: R$ %.2f\n", valor_com_taxa);

    return 0;
}
