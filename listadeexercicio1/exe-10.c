#include <stdio.h>

int main() {

    float valor;
    
    printf("Insira o valor do produto: ");
    scanf("%f", &valor);

    printf("O valor ao decorres de 3 anos é: R$%.2f\n", (valor * 0.30));

}