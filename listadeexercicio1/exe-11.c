#include <stdio.h>

int main() 
{
    //definição das variaveis
    float A, B, C;

    //proteção inicial contra lixo de memoria
    C = 0;

    //Recebimentod dos dados pelo usuario
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    //processamento para troca dos valors
    C = A;
    A = B;
    B = C;

    //saida do resultado
    printf("Valor A: %f\n", A);
    printf("Valor B: %f\n", B);
    return 0;
}
    
