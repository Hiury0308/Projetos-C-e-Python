#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float altura, idade;

    //Recebimento dos valores pelo usuario
    printf("Digite a altura: ");
    if(scanf("%f", &altura) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite a idade: ");
    if(scanf("%f", &idade) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(altura > 180 && idade > 18)
        printf("Acesso permitido");

    else
        printf("Acesso negado");

    return 0;
}