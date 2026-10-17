#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int numero_1, numero_2, numero_3, numero_4;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    if(scanf("%d", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if(scanf("%d", &numero_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o terceiro numero: ");
    if(scanf("%d", &numero_3) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o quarto numero: ");
    if(scanf("%d", &numero_4) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    printf("A soma dos restos é: %d\n", (numero_1 % numero_2) + (numero_3 % numero_4));
    
    return 0;
}