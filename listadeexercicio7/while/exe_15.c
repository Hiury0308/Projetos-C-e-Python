#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int segundos, horas, minutos;

    //Recebimento dos valores
    printf("Digite o valor em segundos: ");
    if(scanf("%d", &segundos) != 1 || segundos < 0)
    {
        printf("Entrada invalida.\n");
        return 1;
    }

    // Inicialização das variaveis
    horas = 0;
    minutos = 0;

    //processamento (tirando de 3600 em 3600 e de 60 em 60, no estilo do exe 7)
    while(segundos >= 3600)
    {
        segundos -= 3600;
        horas++;
    }

    while(segundos >= 60)
    {
        segundos -= 60;
        minutos++;
    }

    //saída para o usuário
    printf("- Horas: %d;\n", horas);
    printf("- Minutos: %d;\n", minutos);
    printf("- Segundos: %d.\n", segundos);

    return 0;
}