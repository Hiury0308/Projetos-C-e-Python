#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int estoque = 0;

    //processamento
    while(1)
    {
        int opcao;
        printf("Menu de Estoque:\n");
        printf("1. Visualizar estoque de bosta\n");
        printf("2. Adicionar produto ao estoque de bosta\n");
        printf("3. Remover produto do estoque de bosta\n");
        printf("4. Encerrar programa de bosta\n");
        printf("Escolha uma opcao de bosta: ");
        if(scanf("%d", &opcao) != 1)
        {
            printf("Entrada invalida. Digite um numero valido.\n");
            while(getchar() != '\n');
            continue;
        }


        switch(opcao)
        {
            case 1:
                printf("O estoque atual contem %d unidades do produto de bosta.\n", estoque);
                break;
            case 2:
                estoque++;
                printf("Produto adicionado ao estoque de bosta. Estoque atual: %d unidades.\n", estoque);
                break;
            case 3:
                if(estoque > 0)
                {
                    estoque--;
                    printf("Produto removido do estoque de bosta. Estoque atual: %d unidades.\n", estoque);
                }
                else
                {
                    printf("Estoque vazio.\n");
                }
                break;
            case 4:
                printf("Encerrando o programa de bosta.\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}