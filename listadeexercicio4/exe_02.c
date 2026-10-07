#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int ANO;

    //Recebimento dos valores pelo usuario
    printf("Digite o ano: ");
    scanf("%d", &ANO);

    //Saida pro usuario
    if(ANO % 400 == 0 || ANO % 4 == 0 && ANO % 100 != 0)
        printf("O ano digitado é bissexto");
    else
        printf("O ano digitado não é bissexto");
    return 0;
}