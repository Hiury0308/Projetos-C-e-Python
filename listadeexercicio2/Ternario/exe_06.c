#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int senha;

    // Recebimento dos valores pelo usuário
    printf("Digite a senha: ");
    if (scanf("%d", &senha) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída para o usuário usando ternário
    senha == 12345678 ? printf("Acesso concedido") : printf("Acesso negado");

    return 0;
}
