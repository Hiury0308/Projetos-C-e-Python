#include <stdio.h>

int main() 
{

    //Declaração das variaveis 
    float NUMERO;

    //Recebimento dos dados
    printf("Digite o primeiro número: ");
    scanf("%f", &NUMERO);

    //Saida dos resultados
    printf("O numero anterior é: %.1f\n", NUMERO - 1);
    printf("O seu numero é número: %.1f\n", NUMERO);
    printf("O proximo número é: %.1f\n", NUMERO + 1);
    return 0;
}
