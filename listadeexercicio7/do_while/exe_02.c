#include <stdio.h>

int main()
{
    // Declaração da variável
    int numero = 0;

    // Saída para o usuário
    do
    {
        printf("%d\n", numero);
        numero += 2;
    } while (numero <= 100);

    return 0;
}
