#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero_1, numero_2, numero_3;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    if(scanf("%f", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o segundo numero: ");
    if(scanf("%f", &numero_2) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }
    printf("Digite o terceiro numero: ");
    if(scanf("%f", &numero_3) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(numero_1 > numero_2 || numero_1 > numero_3)
        printf("O primeiro número digitado é maior que pelo menos um dos outros dois números digitados");

    else
        printf("Ele é menor que os dois números digitados");

    return 0;
}