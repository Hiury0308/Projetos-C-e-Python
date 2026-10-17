#include <stdio.h>
#include <stdbool.h>

int main() 
{
    //Declaração das variaveis
    float numero_1, numero_2, numero_3, numero_4, numero_5;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    if(scanf("%f", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if(scanf("%f", &numero_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o terceiro numero: ");
    if(scanf("%f", &numero_3) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o quarto numero: ");
    if(scanf("%f", &numero_4) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o quinto numero: ");
    if(scanf("%f", &numero_5) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(!(numero_1 < numero_2) && (numero_3 == numero_4 && numero_5 < numero_1) || !(false))
        printf("verdadeiro");

    else
        printf("falso");

    return 0;
}