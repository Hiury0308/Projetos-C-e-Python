#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int NUMERO_1, NUMERO_2, NUMERO_3, NUMERO_4;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &NUMERO_1);
    printf("Digite o segundo numero: ");
    scanf("%d", &NUMERO_2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &NUMERO_3);
    printf("Digite o quarto numero: ");
    scanf("%d", &NUMERO_4);

    //Define resultados como constantes
    #define RESULTADO_1 (NUMERO_1  % NUMERO_2)
    #define RESULTADO_2 (NUMERO_3  % NUMERO_4)
    #define RESULTADO_FINAL (RESULTADO_1 + RESULTADO_2)

    //Saida pro usuario
    printf("%d", RESULTADO_1);
    printf("%d", RESULTADO_2);
    printf("%d", RESULTADO_FINAL);
    return 0;
}