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
    
    //Saida pro usuario usando ternario
    printf("%.0f, %.0f", numero2 < numero1 ? numero2 : numero1, numero1 > numero2 ? numero1 : numero2);
    return 0;
}