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
    if(NUMERO_1 > 10 || NUMERO_2 > 30)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
    return 0;
}