#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int idade;

    //Recebimento dos valores pelo usuario
    printf("Digite a idade: ");
    if(scanf("%d", &idade) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    if(idade < 5)
        printf("Idade invalida para as categorias");
    else if(idade <= 7)
        printf("Infantil A");
    else if(idade <= 11)
        printf("Infantil B");
    else if(idade <= 13)
        printf("Juvenil A");
    else if(idade <= 17)
        printf("Juvenil B");
    else
        printf("Adulto");

    return 0;
}
