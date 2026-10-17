#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Recebimento dos valores pelo usuário
    printf("Digite qualquer numero");
    if(scanf("%d", &numero) != 1)
    {
        printf("Teste 3");
        return 1;
    }

    //Saida pro usuario
    switch (numero)
    {
    case 1:
    case 2:
    case 3:
        printf("Teste 1");
        break;
    case 4:
    case 5:
    case 6:
        printf("Teste 2");
        break;
    
    default:
        printf("Teste 3");
        break;
    }

    return 0;

}