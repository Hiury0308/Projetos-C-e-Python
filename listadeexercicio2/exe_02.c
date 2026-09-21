    #include <stdio.h>

    int main() 
    {
        //Declaração das variaveis
        float NUMERO;

        //Recebimento dos valores pelo usuario
        printf("Digite um numero: ");
        scanf("%f", &NUMERO);
    
        
        //Saida pro usuario
        if (NUMERO < 10)
        {
            printf ("%.0f é menor que dez", NUMERO);  
        }
        else
        return 0;
    }