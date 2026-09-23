#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO_1;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &NUMERO_1);
    
    //Saida pro usuario
    if(NUMERO_1 == 1 || NUMERO_1 == 2 || NUMERO_1 == 3)
    {
        printf("Numero valido");
    }
    else
    {
        printf("Numero invalido");
    }
    return 0;
}