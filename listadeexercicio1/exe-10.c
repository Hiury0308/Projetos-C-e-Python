#include <stdio.h>

int main() 
{
    //definição das variaveis
    float VALOR;

    //recebimento do valor pelo usuario
    printf("Insira o valor do produto: ");
    scanf("%f", &VALOR);

    //processamento e saida dos resultados
    printf("O valor ao decorrer de 3 anos considerando uma redução no valor original é: R$%.2f\n", VALOR - (VALOR * 0.30));
    VALOR = VALOR - (VALOR * 0.10);
    VALOR = VALOR - (VALOR * 0.10);
    VALOR = VALOR - (VALOR * 0.10);
    printf("O valor ao decorrer de 3 anos reduzinho sobre o novo valor é: %.2f\n", VALOR);
    return 0;
}
