#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO;

    //Recebimento dos valores pelo usuario
    printf("Digite um numero: ");
    scanf("%f", &NUMERO);
   
    
    //Saida pro usuario usando ternario
    NUMERO <= 10 ? printf("%.0f", NUMERO) : printf("não");
    return 0;
}