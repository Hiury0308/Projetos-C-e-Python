#include <stdio.h>

int main() {

    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);


    C = A;
    A = B;
    B = C;
    
    printf("Valor A: %f\n", A);
    printf("Valor B: %f\n", B);
}
    
