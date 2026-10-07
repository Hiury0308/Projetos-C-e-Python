#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int senha;

    // Recebimento dos valores pelo usuário
    printf("Digite a senha: ");
    scanf("%d", &senha);

    // Saída para o usuário usando ternário
    senha == 12345678 ? printf("Acesso concedido") : printf("Acesso negado");

    return 0;
}
