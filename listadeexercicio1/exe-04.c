#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos dados
    printf("Digite um número: ");
    if (scanf("%f", &numero) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    // Saída dos resultados
    printf("O número anterior é: %.1f\n", numero - 1);
    printf("O seu número é: %.1f\n", numero);
    printf("O próximo número é: %.1f\n", numero + 1);

    return 0;
}
