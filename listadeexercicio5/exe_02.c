#include <stdio.h>

int main()
{
    //Declaração das variaveis
    float preco_produto_1, preco_produto_2, preco_produto_3;

    //Recebimento dos valores pelo usuario
    printf("Digite o preco do produto 1: ");
    scanf("%f", &preco_produto_1);
    printf("Digite o preco do produto 2: ");
    scanf("%f", &preco_produto_2);
    printf("Digite o preco do produto 3: ");
    scanf("%f", &preco_produto_3);

    //Saida pro usuario
    if(preco_produto_1 < 0 || preco_produto_2 < 0 || preco_produto_3 < 0)
        printf("Preco invalido");
    else if(preco_produto_1 == preco_produto_2 && preco_produto_2 == preco_produto_3)
        printf("Os tres produtos possuem o mesmo preco");
    else if(preco_produto_1 == preco_produto_2 && preco_produto_1 < preco_produto_3)
        printf("Os produtos 1 e 2 possuem o menor preco");
    else if(preco_produto_1 == preco_produto_3 && preco_produto_1 < preco_produto_2)
        printf("Os produtos 1 e 3 possuem o menor preco");
    else if(preco_produto_2 == preco_produto_3 && preco_produto_2 < preco_produto_1)
        printf("Os produtos 2 e 3 possuem o menor preco");
    else if(preco_produto_1 < preco_produto_2 && preco_produto_1 < preco_produto_3)
        printf("Escolha o produto 1");
    else if(preco_produto_2 < preco_produto_1 && preco_produto_2 < preco_produto_3)
        printf("Escolha o produto 2");
    else
        printf("Escolha o produto 3");

    return 0;
}
