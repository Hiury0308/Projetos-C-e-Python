#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero1, numero2, numero3;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    

    //Saida pro usuario usando ternario
    numero1 + numero2 < numero3 ? printf("ok") :  printf ("Não OK");
    return 0;
}