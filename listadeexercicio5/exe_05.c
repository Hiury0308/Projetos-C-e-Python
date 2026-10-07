#include <stdio.h>

int main()
{
    //Declaração das variaveis
    char descricao[100];
    int quantidade;
    float preco_unitario, preco_total, percentual_desconto, valor_desconto, total_pagar;

    //Recebimento dos valores pelo usuario
    printf("Digite o nome do produto: ");
    scanf(" %99[^\n]", descricao);
    printf("Digite a quantidade adquirida: ");
    scanf("%d", &quantidade);
    printf("Digite o preco unitario: ");
    scanf("%f", &preco_unitario);

    //Processamento dos dados
    if(quantidade <= 0 || preco_unitario < 0)
        percentual_desconto = -1;
    else if(quantidade < 5)
        percentual_desconto = 0.02;
    else if(quantidade <= 10)
        percentual_desconto = 0.03;
    else
        percentual_desconto = 0.05;

    preco_total = quantidade * preco_unitario;
    valor_desconto = preco_total * percentual_desconto;
    total_pagar = preco_total - valor_desconto;

    //Saida pro usuario
    if(percentual_desconto < 0)
        printf("Quantidade ou preco invalido");
    else
        printf("Produto: %s\nPreco total sem desconto: R$ %.2f\nDesconto: R$ %.2f\nTotal a pagar: R$ %.2f", descricao, preco_total, valor_desconto, total_pagar);

    return 0;
}
