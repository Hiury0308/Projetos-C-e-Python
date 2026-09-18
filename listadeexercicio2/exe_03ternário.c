#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero;

    //Recebimento dos valores pelo usuario
    printf("Digite um numero: ");
    scanf("%f", &numero);
   
    
    //Saida pro usuario usando ternario
    numero > 100 ? printf("%.0f", numero) : printf("0");
}