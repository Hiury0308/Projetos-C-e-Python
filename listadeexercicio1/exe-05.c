#include <stdio.h>

int main() 
{
    //Variaveis usadas no codigo
    #define CAMISA_P_VALOR 15 
    #define CAMISA_M_VALOR 20 
    #define CAMISA_G_VALOR 25
    int CAMISA_P, CAMISA_M, CAMISA_G,  RESULTADO_G, RESULTADO_M, RESULTADO_P;

    //Recebimento dos valores pelo usuario
    printf("Digite a quantidade de camisas Pequenas: ");
    scanf("%d", &CAMISA_P);
    printf("Digite a quantidade de camisas Médias: ");
    scanf("%d", &CAMISA_M);
    printf("Digite a quantidade de camisas Grandes: ");
    scanf("%d", &CAMISA_G);

    //Operações matematicas
    RESULTADO_G = CAMISA_G * CAMISA_G_VALOR;
    RESULTADO_M = CAMISA_M * CAMISA_M_VALOR;
    RESULTADO_P = CAMISA_P * CAMISA_P_VALOR;

    //saida do resultado
    printf("Seu total é: %.0d", RESULTADO_G + RESULTADO_M + RESULTADO_P);
    return 0;
}
