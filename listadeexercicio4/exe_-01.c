#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int NUMERO_1, NUMERO_2;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &NUMERO_2);

    //Saida pro usuario
    printf("%d", NUMERO_1  % NUMERO_2);
   
    return 0;
}