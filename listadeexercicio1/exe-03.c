#include <stdio.h>

int main() 
{

    //Declaração das variaveis
    float NUMERO;

    //Recebimento do valor pelo ususario
    printf("Digite a primeira nota: ");
    scanf("%f", &NUMERO);

    //saida para o usuario.
    printf("O dobro do seu numero é: %.1f\n", NUMERO * 2);
    printf("A metade do seu numero é: %.1f\n", NUMERO / 2);
    return 0;
}
