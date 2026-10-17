#include <stdio.h>

int main()
{
    //Declaração das variaveis
    char letra;

    // Recebimento dos valores pelo usuário
    printf("Digite uma letra");
    if(scanf(" %c", &letra) != 1)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    //Saida pro usuario
    switch (letra)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("É vogal :)");
        break;
    
    default:
        printf("Num é vogal :(");
        break;
    }

    return 0;

}