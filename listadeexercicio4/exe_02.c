#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int ano;

    //Recebimento dos valores pelo usuario
    printf("Digite o ano: ");
    if(scanf("%d", &ano) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0)
        printf("O ano digitado é bissexto");
    else
        printf("O ano digitado não é bissexto");

    return 0;
}