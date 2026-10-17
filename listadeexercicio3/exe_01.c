#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero_1, numero_2;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero_2);

    //Saida pro usuario
    if(numero_1 == 1 && numero_2 == 1)
        printf("%.0f", numero_1 + numero_2);

    else
        printf("%.0f", numero_1 - numero_2);

    return 0;
}