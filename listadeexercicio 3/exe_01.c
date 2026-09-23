#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO_1, NUMERO_2;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &NUMERO_2);

    //Saida pro usuario
    if(NUMERO_1 == 1 && NUMERO_2 == 1)
    {
        printf("Soma: %.2f", NUMERO_1 + NUMERO_2);
    }
    else
    {
        printf("Subtração: %.2f", NUMERO_1 - NUMERO_2);
    }
    return 0;
}