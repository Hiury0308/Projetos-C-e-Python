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

    //saida para o usuario usando if
    if (NUMERO_1 > NUMERO_2)
    {
        printf("Primeiro numero é maior: %f", NUMERO_1);
    }
    else if (NUMERO_1 < NUMERO_2)
    {
        printf("Segundo numero é maior: %f", NUMERO_2);
    }
    else
        printf("Numeros iguais");
    return 0;
}
