#include <stdio.h>

int main() {

    int escolha;
    float numero1, numero2, divisao, soma, sub, vezes;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o primeiro número: ");
    scanf("%f", &numero2);
    printf("Escolha a operação: \n1 - soma\n2 - sub\n3 - vezes\n4 - divisao\n\n");
    scanf("%d", &escolha);

    if (numero2 == 0) {
        if (escolha == 4) {
        printf("\nSai dai lobisomem");
        return 0;
        }
    }

    if (escolha == 1) {
        soma = numero1 + numero2;
        printf("A soma dos numeros é: %f\n", soma);
    }

    else if (escolha == 2) {
        sub = numero1 - numero2;
        printf("A subtração dos numeros é: %f\n", sub);
    }

    else if (escolha == 3) {
        vezes = numero1 * numero2;
        printf("A mutiplicação dos numeros é: %f\n", vezes);
    }

    else if (escolha == 4) {
        divisao = numero1 / numero2;
        printf("A divisão dos numeros é: %f\n", divisao);
    }
    
    else printf("não escolheu nenhuma das contas doidão");
    return 0;
}