#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int estoque = 0;
    int opcao, caractere;

    //processamento
    do
    {
        printf("Menu de Estoque:\n");
        printf("1. Visualizar estoque\n");
        printf("2. Adicionar um produto ao estoque\n");
        printf("3. Remover um produto do estoque\n");
        printf("4. Encerrar programa\n");
        printf("Escolha uma opcao: ");
        if(scanf("%d", &opcao) != 1)
        {
            printf("Entrada invalida.\n");
            do
            {
                caractere = getchar();
            } while(caractere != '\n' && caractere != EOF);
            opcao = 0;
            continue;
        }

        switch(opcao)
        {
            case 1:
                printf("O estoque atual contem %d unidades do produto.\n", estoque);
                break;
            case 2:
                estoque++;
                printf("Produto adicionado ao estoque. Estoque atual: %d unidades.\n", estoque);
                break;
            case 3:
                if(estoque > 0)
                {
                    estoque--;
                    printf("Produto removido do estoque. Estoque atual: %d unidades.\n", estoque);
                }
                else
                {
                    printf("Estoque vazio.\n");
                }
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao pra kral tu ainda digita uma invalida é de fuder mano.\n");
        }
    } while(opcao != 4);

    return 0;
}
