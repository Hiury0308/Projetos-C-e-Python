#include <stdio.h>

int main()
{
    //Declaração das variaveis
    int numero;

    // Recebimento dos valores pelo usuário
    printf("1 - sucrilhos\n2 - mentas\n3 - yorgut\n4 - salgadinho\n5 - sorvete\nDigite o codigo do produto: ");
    if(scanf("%d", &numero) != 1)
    {
        printf("Codigo de produto invalido\n");
        return 1;
    }

    //Saida pro usuario
    switch (numero)
    {
    case 1:
        printf("sucrilhos");
        break;
    case 2:
        printf("mentas");
        break;
    case 3:
        printf("yorgut");
        break;
    case 4:
        printf("salgadinho");
        break;
    case 5:
        printf("sorvete");
        break;
    
    default:
        printf("Codigo de produto invalido\n");
        return 1;
    }

    return 0;
}
