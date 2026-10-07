#include <stdio.h>

int main()
{
    // Definição da capacidade máxima
    #define CAPACIDADE 90

    // Declaração das variáveis
    int quantidade_alunos;

    // Recebimento do número de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade_alunos);

    // Saída para o usuário
    if (quantidade_alunos > CAPACIDADE)
        printf("Alunos que ficarão de fora: %d\n", quantidade_alunos - CAPACIDADE);
    else
        printf("Nenhum aluno ficará de fora\n");

    return 0;
}
