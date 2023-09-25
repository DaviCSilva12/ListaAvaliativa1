#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &numero);

   
    if (numero % 2 == 0) {
        printf("O numero inserido eh par.\n");
    } else {
        printf("O numero inserido eh ímpar.\n");
    }

    
    while (numero > 0) {
        digito = numero % 10;   
        soma += digito;      
        numero /= 10;        
    }

    
        printf("A soma dos digitos do numero eh: %d\n", soma);

    return 0;
}