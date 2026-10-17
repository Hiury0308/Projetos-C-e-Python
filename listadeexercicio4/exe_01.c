#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int numero_1;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    if(scanf("%d", &numero_1) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(numero_1 % 2 == 0)
        printf("O número digitado é par");
    else
        printf("O número digitado é impar");

    return 0;
}