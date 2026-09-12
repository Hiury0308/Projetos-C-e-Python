#include <stdio.h>

int main() {

    int alunos, capacidade;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);

    capacidade = 90;
    if ((alunos > capacidade));
    {
    printf("Alunos que ficarão de fora: %d", alunos - capacidade);
    }
    else
    printf("Nenhum aluno ficara de fora")

}