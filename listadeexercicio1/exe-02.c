#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float NUMERO_1, NUMERO_2, NUMERO_3, MEDIA;

    //Recebimento dos valores pelo usuario
    printf("Digite a primeira nota: ");
    scanf("%f", &NUMERO_1);
    printf("Digite a segunda nota: ");
    scanf("%f", &NUMERO_2);
    printf("Digite a terceira nota: ");
    scanf("%f", &NUMERO_3);

    //Operação para chegar ao resultado
    MEDIA = (NUMERO_1 + NUMERO_2 + NUMERO_3) / 3;

    //Saida com o resultado
    printf("A média aritmética é: %.1f\n", MEDIA);
    return 0;
}
