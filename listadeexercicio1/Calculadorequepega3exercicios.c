#include <stdio.h>

int main()
{
    // Declaração das variáveis
    int escolha;
    float numero_1, numero_2, resultado;

    // Inputs do usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero_2);
    printf("Escolha a operação: \n1 - soma\n2 - sub\n3 - vezes\n4 - divisão\n\n");
    scanf("%d", &escolha);

    // Bloqueador para contas de divisão por zero
    if (numero_2 == 0 && escolha == 4)
    {
        printf("\nNão é permitido dividir por zero\n");

        return 0;
    }

    // Retorno dos resultados baseado na escolha do usuário
    if (escolha == 1)
    {
        resultado = numero_1 + numero_2;
        printf("A soma dos números é: %f\n", resultado);
    }
    else if (escolha == 2)
    {
        resultado = numero_1 - numero_2;
        printf("A subtração dos números é: %f\n", resultado);
    }
    else if (escolha == 3)
    {
        resultado = numero_1 * numero_2;
        printf("A multiplicação dos números é: %f\n", resultado);
    }
    else if (escolha == 4)
    {
        resultado = numero_1 / numero_2;
        printf("A divisão dos números é: %f\n", resultado);
    }
    else
        printf("Nenhuma operação foi escolhida\n");

    return 0;
}
