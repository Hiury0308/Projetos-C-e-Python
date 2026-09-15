#include <stdio.h>

int main() 
{

    //Variaveis usadas no codigo
    #define camisa_p_valor 15 
    #define camisa_m_valor 20 
    #define camisa_g_valor 25
    int camisaP, camisaM, camisaG,  resultadoG, resultadoM, resultadoP;

    //Recebimento dos valores pelo usuario
    printf("Digite a quantidade de camisas Pequenas: ");
    scanf("%d", &camisaP);
    printf("Digite a quantidade de camisas Médias: ");
    scanf("%d", &camisaM);
    printf("Digite a quantidade de camisas Grandes: ");
    scanf("%d", &camisaG);

    //Operações matematicas
    resultadoG = camisaG * camisa_g_valor;
    resultadoM = camisaM * camisa_m_valor;
    resultadoP = camisaP * camisa_p_valor;

    //saida do resultado
    printf("Seu total é: %.0d", resultadoG + resultadoM + resultadoP);
    return 0;
}
