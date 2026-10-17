#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float altura, idade;

    //Recebimento dos valores pelo usuario
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite a idade: ");
    scanf("%f", &idade);

    //Saida pro usuario
    if(altura > 180 && idade > 18)
        printf("Acesso permitido");

    else
        printf("Acesso negado");

    return 0;
}