#include <stdio.h>

int main() 
{
    //declaração dar variaveis
    int escolha;
    float numero1, numero2, resultado;

    //inputs do usuario
    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o primeiro número: ");
    scanf("%f", &numero2);
    printf("Escolha a operação: \n1 - soma\n2 - sub\n3 - vezes\n4 - divisao\n\n");
    scanf("%d", &escolha);

    //Bloqueador para contas de divisor com 0
    if (numero2 == 0) 
    {
        if (escolha == 4) 
        {
        printf("\nNão é permitido dividar por zero");
        return 0;
        }
    }

    //Retorno dos resultados baseado na escolha do usuario
    if (escolha == 1) 
    {
        resultado = numero1 + numero2;
        printf("A soma dos numeros é: %f\n", resultado);
    }
    else if (escolha == 2) 
    {
        resultado = numero1 - numero2;
        printf("A subtração dos numeros é: %f\n", resultado);
    }
    else if (escolha == 3) 
    {
        resultado = numero1 * numero2;
        printf("A mutiplicação dos numeros é: %f\n", resultado);
    }
    else if (escolha == 4) 
    {
        resultado = numero1 / numero2;
        printf("A divisão dos numeros é: %f\n", resultado);
    }
    else printf("Nenhuma operação foi escolhida");
    return 0;
}
