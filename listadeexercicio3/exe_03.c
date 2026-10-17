#include <stdio.h>
#include <stdbool.h>

int main() 
{
    //Declaração das variaveis
    float numero_1, numero_2, numero_3, numero_4, numero_5;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero_2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero_3);
    printf("Digite o quarto numero: ");
    scanf("%f", &numero_4);
    printf("Digite o quinto numero: ");
    scanf("%f", &numero_5);

    //Saida pro usuario
    if(!(numero_1 < numero_2) && (numero_3 == numero_4 && numero_5 < numero_1) || !(false))
        printf("verdadeiro");

    else
        printf("falso");

    return 0;
}