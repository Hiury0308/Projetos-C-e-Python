#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero de 1 a 7: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Numero invalido\n");
        return 1;
    }

    //Saida pro usuario
    switch (numero)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sábado");
        break;
    
    default:
        printf("Não corresponde a um dia da semana");
        return 1;
    }

    return 0;

}
