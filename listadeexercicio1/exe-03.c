#include <stdio.h>

int main() 
{

    //Declaração das variaveis
    float numero;

    //Recebimento do valor pelo ususario
    printf("Digite a primeira nota: ");
    scanf("%f", &numero);

    //saida para o usuario.
    printf("O dobro do seu numero é: %.1f\n", numero * 2)
    printf("A metade do seu numero é: %.1f\n", numero / 2)
    return 0;
}
