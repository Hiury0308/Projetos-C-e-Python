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
    
    //saida para o usuario usando if
    if (numero1 > numero2)
    {
        printf("Primeiro numero é maior: %f", numero1);
    }
    else if (numero1 < numero2)
    {
        printf("Segundo numero é maior: %f", numero2);
    }
    else
        printf("Numeros iguais");
return 0;
}
