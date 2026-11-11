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
        printf("Entrada invalida. Digite um numero entre 0 e 20.\n");
        return 1;
    }

    //operação de proteção para não estourar o tamanho da variavel
    if(numero > 20)
    {
        printf("Maior que 20 é foda.\n");
        return 1;
    }

    // Inicialização das variaveis
    fatorial = 1;
    contador = 1;

    //processamento
    do
    {
        fatorial *= contador;
        contador++;
    } while(contador <= numero);

    //saída para o usuário
    printf("%d! = %llu\n", numero, fatorial);

    return 0;
}
