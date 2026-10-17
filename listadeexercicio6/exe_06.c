#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero de 0 a 10: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Numero invalido\n");
        return 1;
    }

    //Saida pro usuario
    switch (numero)
    {
    case 0:
        printf("Zero");
        break;    
    case 1:
        printf("Um");
        break;
    case 2:
        printf("Dois");
        break;
    case 3:
        printf("Três");
        break;
    case 4:
        printf("Quatro");
        break;
    case 5:
        printf("Cinco");
        break;
    case 6:
        printf("Seis");
        break;
    case 7:
        printf("Sete");
        break;
    case 8:
        printf("Oito");
        break;
    case 9:
        printf("Nove");
        break;
    case 10:
        printf("Dez");
        break;

    default:
        printf("Não é um numero de 0 a 10");
        return 1;
    }

    return 0;

}