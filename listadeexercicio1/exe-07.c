#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int ALUNOS;

    //Recebimento do numero de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &ALUNOS);

    //Definição do maximo da capacidade
    #define CAPACIDADE 90

    //saida para o ususario
    if ((ALUNOS > CAPACIDADE))
    {
    printf("Alunos que ficarão de fora: %d", ALUNOS - CAPACIDADE);
    }
    else
    {
        printf("Nenhum aluno ficara de fora");
    }
    return 0;
}
