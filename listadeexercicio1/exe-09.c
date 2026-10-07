#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int horas_trabalhadas;
    float percentual_desconto;

    // Recebimento da quantidade de horas e do desconto
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    printf("Informe a porcentagem de desconto: ");
    scanf("%f", &percentual_desconto);

    // Saída para o usuário
    printf("Seu salário bruto é: R$%d\n", horas_trabalhadas * 20);
    printf("O valor com descontos é: R$%.2f\n", (horas_trabalhadas * 20) * (percentual_desconto / 100));

    return 0;
}
