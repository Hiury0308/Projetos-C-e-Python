#include <stdio.h>

int main() 
{
    //declaração dar variaveis
    int ESCOLHA;
    float NUMERO_1, NUMERO_2, RESULTADO;

    //inputs do usuario
    printf("Digite o primeiro número: ");
    scanf("%f", &NUMERO_1);
    printf("Digite o primeiro número: ");
    scanf("%f", &NUMERO_2);
    printf("Escolha a operação: \n1 - soma\n2 - sub\n3 - vezes\n4 - divisao\n\n");
    scanf("%d", &ESCOLHA);

    //Bloqueador para contas de divisor com 0
    if (NUMERO_2 == 0) 
    {
        if (ESCOLHA == 4) 
        {
        printf("\nNão é permitido dividar por zero");
        return 0;
        }
    }

    //Retorno dos resultados baseado na escolha do usuario
    if (ESCOLHA == 1) 
    {
        RESULTADO = NUMERO_1 + NUMERO_2;
        printf("A soma dos numeros é: %f\n", RESULTADO);
    }
    else if (ESCOLHA == 2) 
    {
        RESULTADO = NUMERO_1 - NUMERO_2;
        printf("A subtração dos numeros é: %f\n", RESULTADO);
    }
    else if (ESCOLHA == 3) 
    {
        RESULTADO = NUMERO_1 * NUMERO_2;
        printf("A mutiplicação dos numeros é: %f\n", RESULTADO);
    }
    else if (ESCOLHA == 4) 
    {
        RESULTADO = NUMERO_1 / NUMERO_2;
        printf("A divisão dos numeros é: %f\n", RESULTADO);
    }
    else printf("Nenhuma operação foi escolhida");
    return 0;
}
