#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float A, B, C;

    //Recebimento dos valores pelo usuario
    printf("Digite o tamanho do primeiro lado do triangulo: ");
    scanf("%f", &A);
    printf("Digite o tamanho do segundo lado do triangulo: ");
    scanf("%f", &B);
    printf("Digite o tamanho do terceiro lado do triangulo: ");
    scanf("%f", &C);

    //Saida pro usuario
    if(!(A < B + C && B < C + A && C < A + B)) 
    {
        printf("Isso não é um triangulo");
    }
    else if(A == B && A == C)
    {
        printf("Equilátero");
    }
    else if(A == B || B == C || A == C)
    {
        printf("isósceles");
    }
    else
    {
        printf("escaleno");
    }
    return 0;
}