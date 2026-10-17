#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int numero_1, numero_2, numero_3, numero_4;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero_2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &numero_3);
    printf("Digite o quarto numero: ");
    scanf("%d", &numero_4);

    //Saida pro usuario
    printf("A soma dos restos é: %d\n", (numero_1 % numero_2) + (numero_3 % numero_4));
    
    return 0;
}