#include <stdio.h>
#include <ctype.h>

int main()
{
    //Declaração das variaveis
    char letra;

    //Recebimento dos valores pelo usuario
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    //Processamento dos dados
    letra = (char)tolower((unsigned char)letra);

    //Saida pro usuario
    if(!isalpha((unsigned char)letra))
        printf("Entrada invalida");
    else if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        printf("A letra digitada e uma vogal");
    else
        printf("A letra digitada e uma consoante");

    return 0;
}
