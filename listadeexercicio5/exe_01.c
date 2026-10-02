#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    float IDADE;

    //Recebimento dos valores pelo usuario
    printf("Digite a idade: ");
    scanf("%f", &IDADE);

    //Saida pro usuario
    if(IDADE >= 5 && IDADE <= 7)
    {
        printf("Infantil A");
    }
    else if(IDADE >= 8 && IDADE <= 11)
    {
        printf("Infantil B");
    }
    else if(IDADE >= 12 && IDADE <= 13)
    {
        printf("Juvenil A");
    }
    else if(IDADE >= 14 && IDADE <= 17)
    {
        printf("Juvenil B");
    }
    else if(IDADE >= 18)
    {
        printf("Adulto");
    }
    return 0;
}