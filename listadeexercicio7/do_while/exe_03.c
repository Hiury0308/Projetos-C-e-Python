#include <stdio.h>

int main()
{
    // Declaração da variável
    int numero = 1;

    // Saída para o usuário
    do
    {
        printf("%d\n", numero);
        numero += 2;
    } while (numero <= 99);

    return 0;
}
