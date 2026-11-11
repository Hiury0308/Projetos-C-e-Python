#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero, digitados, soma;
    float media;

    // Inicialização das variaveis
    digitados = 0;
    soma = 0;

    // Recebimento dos valores e processamento
    do
    {
        printf("Digite qualquer numero: ");
        if(scanf("%d", &numero) != 1)
        {
            printf("Entrada invalida\n");
            return 1;
        }
        digitados++;
        soma += numero;
    } while(digitados < 500);

    //saida para o usuario
    media = (float)soma / digitados;
    printf("Media: %.2f\n", media);

    return 0;
}
