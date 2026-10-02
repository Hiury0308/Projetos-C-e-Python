#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NOTA;

    //Recebimento dos valores pelo usuario
    printf("Digite a nota do aluno: ");
    scanf("%f", &NOTA);
    


    //Saida pro usuario
    if(NOTA >= 9)
    {
        printf("A");
    }
    else if(NOTA >= 7.5 && NOTA <= 9)
    {
        printf("B");
    }
    else if(NOTA >= 6 && NOTA <= 7.5)
    {
        printf("C");
    }
    else if(NOTA >= 4 && NOTA <= 6)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }
    return 0;
}