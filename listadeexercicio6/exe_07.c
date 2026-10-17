#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero_1, numero_2;
    char operador;

    // Recebimento dos valores pelo usuário
    printf("Digite um numero: ");
    if(scanf("%d", &numero_1) != 1)
    {
        printf("Numero invalido\n");
        return 1;
    }
    printf("Digite outro numero: ");
    if(scanf("%d", &numero_2) != 1)
    {
        printf("Numero invalido\n");
        return 1;
    }
    printf("Digite um operador matematico: ");
    if(scanf(" %c", &operador) != 1)
    {
        printf("Operador invalido\n");
        return 1;
    }

    //Saida pro usuario
    switch (operador)
    {
    case '+':
        printf("Resultado: %d\n", numero_1 + numero_2);
        break;
    case '-':
        printf("Resultado: %d\n", numero_1 - numero_2);
        break;
    case 'x':
    case '*':
        printf("Resultado: %d\n", numero_1 * numero_2);
        break;
    case '/':
        if(numero_2 == 0)
        {
            printf("Nao e permitido dividir por zero\n");
            return 1;
        }
        printf("Resultado: %.2f\n", (float)numero_1 / numero_2);
        break;
    
    default:
        printf("Operador invalido\n");
        return 1;
    }

    return 0;

}