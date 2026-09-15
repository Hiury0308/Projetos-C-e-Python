#include <stdio.h>

int main() 
{
    //definição das variaveis
    float valor;

    //recebimento do valor pelo usuario
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);

    //processamento e saida dos resultados
    printf("O valor ao decorrer de 3 anos considerando uma redução no valor original é: R$%.2f\n", valor - (valor * 0.30));
    valor = valor - (valor * 0.10);
    valor = valor - (valor * 0.10);
    valor = valor - (valor * 0.10);
    printf("O valor ao decorrer de 3 anos reduzinho sobre o novo valor é: %.2f\n", valor);
    return 0;
}
