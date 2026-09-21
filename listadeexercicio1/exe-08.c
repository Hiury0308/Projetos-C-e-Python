#include <stdio.h>

int main() 
{
    //variaveis utilizadas no codigo
    int DIAS, VALOR_PARA_CONTA, VALOR_COM_DESCONTO;

    //recebimento da quantia de dias
    printf("Digite a quantia de dias trabalhados: ");
    scanf("%d", &DIAS);

    //Operações matematicas
    VALOR_PARA_CONTA = DIAS * 30;
    VALOR_COM_DESCONTO = VALOR_PARA_CONTA / 10;
        
    //saida para o usuario
    printf("Valor total: R$%.2d\n", VALOR_PARA_CONTA);
    printf("Valor do descontos: R$%.2d\n", VALOR_COM_DESCONTO);
    printf("Valor pós desconto: R$%.2d\n", VALOR_PARA_CONTA - VALOR_COM_DESCONTO);
    return 0;
}
