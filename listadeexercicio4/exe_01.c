#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int NUMERO_1;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &NUMERO_1);

    //Saida pro usuario
    if(NUMERO_1 % 2 == 0)
    {
        printf("O número digitado é par");
    }
    else
    {
        printf("O número digitado é impar");
    }
    return 0;
}