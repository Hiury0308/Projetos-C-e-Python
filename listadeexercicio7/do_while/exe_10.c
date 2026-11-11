#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int base, expoente, contador;
    long long resultado;

    //Recebimento dos valores
    printf("Digite a base: ");
    if(scanf("%d", &base) != 1)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    printf("Digite o expoente (inteiro maior ou igual a 0): ");
    if(scanf("%d", &expoente) != 1 || expoente < 0)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    //Inicialização das variaveis
    resultado = 1;
    contador = 0;

    //processamento
    do
    {
        if(contador < expoente)
        {
            resultado *= base;
            contador++;
        }
    } while(contador < expoente);

    //saída para o usuário
    printf("%d elevado a %d = %lld\n", base, expoente, resultado);

    return 0;
}
