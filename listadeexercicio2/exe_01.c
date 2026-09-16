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
    
    //Saida pro usuario usando essa bosta de tenario
    printf("%.0f\n%.0f", numero1 < numero2 ? numero1 : numero2, numero1 > numero2 ? numero1 : numero2 ); 
    return 0;
}