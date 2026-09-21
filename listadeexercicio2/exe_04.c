#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO_1, NUMERO_2, NUMERO_3;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &NUMERO_2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &NUMERO_3);
    
    //Saida pro usuario
    if (NUMERO_1 + NUMERO_2 < NUMERO_3)
    {
        printf ("ok");
    }
    else
    printf ("Não há nada OK");
    return 0;
}