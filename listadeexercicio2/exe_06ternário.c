#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int SENHA;

    //Recebimento dos valores pelo usuario
    printf("Digite a senha: ");
    scanf("%d", &SENHA);
    
    //Saida pro usuario
    SENHA == 12345678 ? printf("Acesso concedido") : printf("Acesso negado");
    return 0;
}