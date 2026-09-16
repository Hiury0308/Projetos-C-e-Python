#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float numero1, numero2, numero3, media;

    //Recebimento dos valores pelo usuario
    printf("Digite a primeira nota: ");
    scanf("%f", &numero1);
    printf("Digite a segunda nota: ");
    scanf("%f", &numero2);
    printf("Digite a terceira nota: ");
    scanf("%f", &numero3);

    //Operação para chegar ao resultado
    media = (numero1 + numero2 + numero3) / 3;

    //Saida com o resultado
    if (media > 6)
    {
        printf("Aprovado");
    }
    else
        printf("reprovado");
    
}