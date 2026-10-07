#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float valor_original, valor_reducao_original, valor_reducao_composta;

    // Recebimento do valor pelo usuário
    printf("Insira o valor do produto: ");
    scanf("%f", &valor_original);

    // Processamento dos resultados
    valor_reducao_original = valor_original - (valor_original * 0.30);

    valor_reducao_composta = valor_original;
    valor_reducao_composta = valor_reducao_composta - (valor_reducao_composta * 0.10);
    valor_reducao_composta = valor_reducao_composta - (valor_reducao_composta * 0.10);
    valor_reducao_composta = valor_reducao_composta - (valor_reducao_composta * 0.10);

    // Saída dos resultados
    printf("O valor ao decorrer de 3 anos considerando uma redução no valor original é: R$%.2f\n", valor_reducao_original);
    printf("O valor ao decorrer de 3 anos reduzindo sobre o novo valor é: R$%.2f\n", valor_reducao_composta);

    return 0;
}
