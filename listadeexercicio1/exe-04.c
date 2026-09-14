#include <stdio.h>

int main() 
{

    //Declaração das variaveis 
    float numero;

    //Recebimento dos dados
    printf("Digite o primeiro número: ");
    scanf("%f", &numero);

    //Saida dos resultados
    printf("O numero anterior é: %.1f\n", numero - 1);
    printf("O seu numero é número: %.1f\n", numero);
    printf("O proximo número é: %.1f\n", numero + 1);
}
