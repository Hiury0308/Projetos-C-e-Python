#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int A, B, C;

    //Recebimento dos valores pelo usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &A);
    printf("Digite o segundo numero: ");
    scanf("%d", &B);

    //Saida pro usuario com ternario
    C = A == B ? A + B : A * B;
    printf("Conta: %.0d", C);
    return 0;
}