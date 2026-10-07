#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float ALTURA, IDADE;

    //Recebimento dos valores pelo usuario
    printf("Digite a altura: ");
    scanf("%f", &ALTURA);
    printf("Digite a idade: ");
    scanf("%f", &IDADE);

    //Saida pro usuario
    if(ALTURA > 180 && IDADE > 18)
        printf("Acesso permitido");

    else
        printf("Acesso negado");

    return 0;
}