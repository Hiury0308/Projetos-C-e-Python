#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int alunos, capacidade;

    //Recebimento do numero de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    //Definição do maximo da capacidade
    capacidade = 90;

    //saida para o ususario
    if ((alunos > capacidade));
    {
    printf("Alunos que ficarão de fora: %d", alunos - capacidade);
    }
    else
    printf("Nenhum aluno ficara de fora")
    return 0;
}
