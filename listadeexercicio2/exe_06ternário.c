#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int senha;

    //Recebimento dos valores pelo usuario
    printf("Digite a senha: ");
    scanf("%d", &senha);
   
    
    //Saida pro usuario
    senha == 12345678 ? printf("Acesso concedido") : printf("Acesso negado");
    return 0;
}