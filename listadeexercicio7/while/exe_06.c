#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero, tabela;

    printf("Digite um numero: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Entrada invalida. Digite um numero valido.\n");
        return 1;
    }

    // Inicialização das variaveis
    tabela = 10;

    // Recebimento dos valores e processamento
    while (tabela >= 1)
    {
        printf("%d x %d = %d\n", numero, tabela, numero * tabela);
        tabela--;
    }

    return 0;
}