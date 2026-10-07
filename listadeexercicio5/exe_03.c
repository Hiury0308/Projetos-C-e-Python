#include <stdio.h>

int main()
{
    //Declaração das variaveis
    float nota;

    //Recebimento dos valores pelo usuario
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    //Saida pro usuario
    if(nota < 0 || nota > 10)
        printf("Nota invalida");
    else if(nota >= 9)
        printf("A");
    else if(nota >= 7.5)
        printf("B");
    else if(nota >= 6)
        printf("C");
    else if(nota >= 4)
        printf("D");
    else
        printf("E");

    return 0;
}
