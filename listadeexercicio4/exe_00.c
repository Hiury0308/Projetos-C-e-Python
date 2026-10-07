#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int NUMERO_1, NUMERO_2, NUMERO_3, NUMERO_4;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &NUMERO_2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &NUMERO_3);
    printf("Digite o quarto numero: ");
    scanf("%d", &NUMERO_4);

    //Saida pro usuario
    printf("A soma dos restos é: %d\n", (NUMERO_1 % NUMERO_2) + (NUMERO_3 % NUMERO_4));
    
    return 0;
}