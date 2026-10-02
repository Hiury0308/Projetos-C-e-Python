#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float PRODUTO_1, PRODUTO_2, PRODUTO_3;

    //Recebimento dos valores pelo usuario
    printf("Digite o preço do produto 1: ");
    scanf("%f", &PRODUTO_1);
    printf("Digite o preço do produto 2: ");
    scanf("%f", &PRODUTO_2);
    printf("Digite o preço do produto 3: ");
    scanf("%f", &PRODUTO_3);


    //Saida pro usuario
    if(PRODUTO_1 < PRODUTO_2 && PRODUTO_1 < PRODUTO_3)
    {
        printf("Escolha o produto 1");
    }
    else if(PRODUTO_2 < PRODUTO_1 && PRODUTO_2 < PRODUTO_3)
    {
        printf("Escolha o produto 2");
    }
    else if (PRODUTO_3)
    {
        printf("Escolha o produto 3");
    }
    return 0;
}