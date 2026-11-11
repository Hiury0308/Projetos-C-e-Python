#include <stdio.h>

int main()
{
    //Declaração das variaveis
    float numero, maior, menor;
    int digitados, continuar, caractere;

    // Inicialização das variaveis
    digitados = 0;
    continuar = 1;
    maior = 0;
    menor = 0;

    //Recebimento dos valores e processamento
    do
    {
        printf("Digite um numero (0 para encerrar, minimo de 5 numeros): ");
        if(scanf("%f", &numero) != 1)
        {
            printf("Entrada invalida.\n");
            do
            {
                caractere = getchar();
            } while(caractere != '\n' && caractere != EOF);
            continue;
        }

        if(numero == 0)
        {
            if(digitados < 5)
            {
                printf("Ainda faltam %d numeros.\n", 5 - digitados);
            }
            else
            {
                continuar = 0;
            }
            continue;
        }

        //o primeiro numero digitado é o maior e o menor ao mesmo tempo
        if(digitados == 0)
        {
            maior = numero;
            menor = numero;
        }
        else
        {
            if(numero > maior)
            {
                maior = numero;
            }
            if(numero < menor)
            {
                menor = numero;
            }
        }

        digitados++;
    } while(continuar);

    //saída para o usuário
    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f\n", menor);

    return 0;
}
