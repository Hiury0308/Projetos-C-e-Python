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
    while (digitados < 500)
    {
        printf("Digite qualquer numero: ");
        if(scanf("%d", &numero) != 1)
        {
            printf("Entrada invalida. Digite um numero valido.\n");
            return 1;
        }
        digitados++;
        soma += numero;
    }

    //saida para o usuario
    media = (float)soma / digitados;
    printf("Media: %.2f\n", media);

    return 0;
}