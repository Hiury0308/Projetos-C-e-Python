#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero, contador;
    unsigned long long fatorial;

    //Recebimento dos valores
    printf("Digite um numero (inteiro de 0 a 20): ");
    if(scanf("%d", &numero) != 1 || numero < 0)
    {
        printf("Entrada invalida. Sai com numero negativo pra lá lobisomem.\n");
        return 1;
    }

    //operação de proteção para não estourar o tamanho da variavel
    if(numero > 20)
    {
        printf("Eita fatoral grande da porra kkkk.\n");
        return 1;
    }

    // Inicialização das variaveis
    fatorial = 1;
    contador = 1;

    //processamento
    while(contador <= numero)
    {
        fatorial *= contador;
        contador++;
    }

    //saída para o usuário
    printf("%d! = %llu\n", numero, fatorial);

    return 0;
}