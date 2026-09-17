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

    //Saida pro usuario
    if (A == B)
    {
        C = A + B;
        printf ("soma: %0.d", C);
    }
    else
    {
        C = A * B;
        printf ("Multi: %.0d", C);
    }
    return 0;
}