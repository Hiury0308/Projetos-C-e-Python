#include <stdio.h>

int main() {

    int dias, valorparaconta, valorcomdesconto;

    printf("Digite a quantia de dias trabalhados: ");
    scanf("%d", &dias);

    printf("Valor total: R$%.2d\n", valorparaconta = dias * 30 );
    printf("Valor do descontos: R$%.2d\n", valorcomdesconto = valorparaconta / 10);
    printf("Valor pós desconto: R$%.2d\n", valorparaconta - valorcomdesconto);
}
