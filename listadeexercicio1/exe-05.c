#include <stdio.h>

int main()
{
    // Definição dos valores das camisas
    #define CAMISA_P_VALOR 15
    #define CAMISA_M_VALOR 20
    #define CAMISA_G_VALOR 25

    // Declaração das variáveis
    int quantidade_camisas_p, quantidade_camisas_m, quantidade_camisas_g;
    int subtotal_p, subtotal_m, subtotal_g;

    // Recebimento dos valores pelo usuário
    printf("Digite a quantidade de camisas Pequenas: ");
    scanf("%d", &quantidade_camisas_p);
    printf("Digite a quantidade de camisas Médias: ");
    scanf("%d", &quantidade_camisas_m);
    printf("Digite a quantidade de camisas Grandes: ");
    scanf("%d", &quantidade_camisas_g);

    // Operações matemáticas
    subtotal_p = quantidade_camisas_p * CAMISA_P_VALOR;
    subtotal_m = quantidade_camisas_m * CAMISA_M_VALOR;
    subtotal_g = quantidade_camisas_g * CAMISA_G_VALOR;

    // Saída do resultado
    printf("Seu total é: %d\n", subtotal_p + subtotal_m + subtotal_g);

    return 0;
}
