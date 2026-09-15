#include <stdio.h>

int main() 
{
    //variaveis utilizadas no codigo
    int dias, valor_para_conta, valor_com_desconto;

    //recebimento da quantia de dias
    printf("Digite a quantia de dias trabalhados: ");
    scanf("%d", &dias);

    //Operações matematicas
    valor_para_conta = dias * 30
    valor_com_desconto = valor_para_conta / 10
        
    //saida para o usuario
    printf("Valor total: R$%.2d\n", valor_para_conta);
    printf("Valor do descontos: R$%.2d\n", valor_com_desconto);
    printf("Valor pós desconto: R$%.2d\n", valor_para_conta - valor_com_desconto);
    return 0;
}
