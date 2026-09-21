#include <stdio.h>

int main() 
{
    //variaveis utilizadas no codigo
    int HORAS;
    float DESCONTO;

    //recebimento da quantia de dias
    printf("Informe a quantidade de horas trabalhada: ");
    scanf("%d", &HORAS);
    printf("Informe a porcentagem de desconto: ");
    scanf("%f", &DESCONTO);

    //Saida para o usuario
    printf("Seu salario bruto é: R$%d\n", HORAS * 20); 
    printf("O valor com descontos é: R$%.2f\n", (HORAS * 20) *  (DESCONTO / 100));
}
