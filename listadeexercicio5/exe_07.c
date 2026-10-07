#include <stdio.h>
#include <ctype.h>

int main()
{
    //Declaração das variaveis
    char turno;

    //Recebimento dos valores pelo usuario
    printf("Digite o turno em que voce estuda (M, V ou N): ");
    scanf(" %c", &turno);

    //Processamento dos dados
    turno = (char)toupper((unsigned char)turno);

    //Saida pro usuario
    if(turno == 'M')
        printf("Bom dia!");
    else if(turno == 'V')
        printf("Boa tarde!");
    else if(turno == 'N')
        printf("Boa noite!");
    else
        printf("Resposta invalida");

    return 0;
}
