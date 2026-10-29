#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Recebimento dos valores pelo usuário
    printf("1 - cadastrar\n2 - logar\n3 - sair\nDigite um numero de 1 a 3: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Valor invalido\n");
        return 1;
    }

    //Saida pro usuario
    switch (numero)
    {
    case 1:
        printf("cadastrar");
        break;
    case 2:
        printf("logar");
        break;
    case 3:
        printf("sair");
        break;
    
    default:
        printf("Valor invalido\n");
        return 1;
    }
    
    return 0;
}