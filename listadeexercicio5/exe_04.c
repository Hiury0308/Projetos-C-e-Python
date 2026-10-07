#include <stdio.h>

int main()
{
    //Declaração das variaveis
    float lado_1, lado_2, lado_3;

    //Recebimento dos valores pelo usuario
    printf("Digite o tamanho do primeiro lado do triangulo: ");
    scanf("%f", &lado_1);
    printf("Digite o tamanho do segundo lado do triangulo: ");
    scanf("%f", &lado_2);
    printf("Digite o tamanho do terceiro lado do triangulo: ");
    scanf("%f", &lado_3);

    //Saida pro usuario
    if(lado_1 <= 0 || lado_2 <= 0 || lado_3 <= 0)
        printf("Os lados devem possuir valores maiores que zero");
    else if(!(lado_1 < lado_2 + lado_3 && lado_2 < lado_1 + lado_3 && lado_3 < lado_1 + lado_2))
        printf("Isso nao e um triangulo");
    else if(lado_1 == lado_2 && lado_1 == lado_3)
        printf("Equilatero");
    else if(lado_1 == lado_2 || lado_2 == lado_3 || lado_1 == lado_3)
        printf("Isosceles");
    else
        printf("Escaleno");

    return 0;
}
