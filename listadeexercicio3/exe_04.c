#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero_1;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_1);
    
    //Saida pro usuario
    if(numero_1 == 1 || numero_1 == 2 || numero_1 == 3)
        printf("Numero valido");

    else
        printf("Numero invalido");

    return 0;
}