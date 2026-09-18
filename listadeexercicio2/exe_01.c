#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero1, numero2;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    
    //Saida pro usuario
    if (numero1 > numero2)
    {
        printf ("Ordem crescente: \n%.0f\n%.0f", numero2, numero1);
    }
    else if (numero1 < numero2)
    {
        printf ("Ordem crescente: \n%.0f\n%.0f", numero1, numero2);
    }
    else
    printf ("numeros iguais, operação invalida");
    return 0;
}