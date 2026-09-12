#include <stdio.h>

int main() {

    int camisaP, camisaM, camisaG, camisaPValor, camisaMValor, camisaGValor, resultadoG, resultadoM, resultadoP;
    printf("Digite a quantidade de camisas Pequenas: ");
    scanf("%d", &camisaP);
    printf("Digite a quantidade de camisas Médias: ");
    scanf("%d", &camisaM);
    printf("Digite a quantidade de camisas Grandes: ");
    scanf("%d", &camisaG);

    camisaPValor = 15;
    camisaMValor = 20;
    camisaGValor = 25;
    
    resultadoG = camisaG * camisaGValor;
    resultadoM = camisaM * camisaMValor;
    resultadoP = camisaP * camisaPValor;
    
    printf("Seu total é: %.0d", resultadoG + resultadoM + resultadoP);
}
