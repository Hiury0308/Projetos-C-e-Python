#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float valor_compra, resultado;

    //Recebimento dos valores
    printf("Digite o valor da compra: ");
    scanf("%f", &valorcompra);

    //operação necessaria para o resultado
    resultado = valorcompra + 10;

    //saida para o usuario
    printf("O valor da compra sem taxa: R$ %.2f \n", valorcompra);
    printf("O valor da compra com taxa: R$ %.2f \n", resultado);
    return 0;
}
