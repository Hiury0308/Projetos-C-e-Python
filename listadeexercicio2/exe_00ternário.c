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
    
    //saida para o usuario usando ternário
    printf(numero1 > numero2 ? numero2, numero1 : numero1, numero2);
}
