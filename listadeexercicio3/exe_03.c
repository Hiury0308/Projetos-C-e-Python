#include <stdio.h>
#include <stdbool.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO_1, NUMERO_2, NUMERO_3, NUMERO_4, NUMERO_5;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &NUMERO_2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &NUMERO_3);
    printf("Digite o quarto numero: ");
    scanf("%f", &NUMERO_4);
    printf("Digite o quinto numero: ");
    scanf("%f", &NUMERO_5);

    //Saida pro usuario
    if(!(NUMERO_1 < NUMERO_2) && (NUMERO_3 == NUMERO_4 && NUMERO_5 < NUMERO_1) || !(false))
        printf("verdadeiro");

    else
        printf("falso");

    return 0;
}