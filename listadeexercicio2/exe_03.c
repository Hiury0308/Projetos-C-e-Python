#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero;

    //Recebimento dos valores pelo usuario
    printf("Digite um numero: ");
    scanf("%f", &numero);
   
    
    //Saida pro usuario
    if (numero > 100)
    {
        printf ("%.0f", numero);  
    }
    else
    printf ("0");
    return 0;
}