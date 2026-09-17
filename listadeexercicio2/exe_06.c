#include <stdio.h>

int main() 
{
    //Declaração das variaveis
    int senha;

    //Recebimento dos valores pelo usuario
    printf("Digite a senha: ");
    scanf("%d", &senha);
   
    
    //Saida pro usuario
    if (senha == 12345678)
    {
        printf ("Acesso concedido");  
    }
    else
    printf ("Acesso negado");
    return 0;
}