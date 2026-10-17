#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int numero_1, numero_2;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero_2);

    //Saida pro usuario
    printf("%d", numero_1  % numero_2);
   
    return 0;
}