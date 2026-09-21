#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float VALOR_COMPRA, RESULTADO;

    //Recebimento dos valores
    printf("Digite o valor da compra: ");
    scanf("%f", &VALOR_COMPRA);

    //operação necessaria para o resultado
    RESULTADO = VALOR_COMPRA + 10;

    //saida para o usuario
    printf("O valor da compra sem taxa: R$ %.2f \n", VALOR_COMPRA);
    printf("O valor da compra com taxa: R$ %.2f \n", RESULTADO);
    return 0;
}
