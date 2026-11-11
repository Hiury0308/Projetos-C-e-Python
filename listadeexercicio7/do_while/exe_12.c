#include <stdio.h>

int main()
{
    //Declaração das variaveis
    float numero, soma, media;
    int digitados, caractere;

    // Inicialização das variaveis
    numero = 1;
    soma = 0;
    digitados = 0;

    //Recebimento dos valores e processamento
    do
    {
        printf("Digite um numero maior que zero (0 para encerrar): ");
        if(scanf("%f", &numero) != 1)
        {
            printf("Entrada invalida.\n");
            do
            {
                caractere = getchar();
            } while(caractere != '\n' && caractere != EOF);
            numero = 1;
            continue;
        }

        if(numero < 0)
        {
            printf("Digite um numero maior que zero.\n");
            numero = 1;
            continue;
        }

        if(numero > 0)
        {
            soma += numero;
            digitados++;
        }
    } while(numero != 0);

    //saída para o usuário
    if(digitados == 0)
    {
        printf("Nenhum numero digitado. Sem media.\n");
        return 0;
    }

    media = soma / digitados;
    printf("Quantidade de numeros digitados: %d\n", digitados);
    printf("Media: %.2f\n", media);

    return 0;
}
