#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int ano;

    //Recebimento dos valores pelo usuario
    printf("Digite o ano: ");
    scanf("%d", &ano);

    //Saida pro usuario
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
        printf("O ano digitado é bissexto");
    else
        printf("O ano digitado não é bissexto");

    return 0;
}