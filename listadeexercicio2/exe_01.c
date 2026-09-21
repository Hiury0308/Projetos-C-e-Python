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
    if (NUMERO_1 > NUMERO_2)
    {
        printf ("Ordem crescente: \n%.0f\n%.0f", NUMERO_2, NUMERO_1);
    }
    else if (NUMERO_1 < NUMERO_2)
    {
        printf ("Ordem crescente: \n%.0f\n%.0f", NUMERO_1, NUMERO_2);
    }
    else
    printf ("numeros iguais, operação invalida");
    return 0;
}