#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float numero;

    // Recebimento dos dados
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Saída dos resultados
    printf("O número anterior é: %.1f\n", numero - 1);
    printf("O seu número é: %.1f\n", numero);
    printf("O próximo número é: %.1f\n", numero + 1);

    return 0;
}
