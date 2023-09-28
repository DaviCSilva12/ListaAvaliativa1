#include <stdio.h>

int main() {
    int numN, num, digito;
    int soma = 0;

        scanf("%d", &num);

        numN = num;

    
    if (num % 2 == 0) {
        printf("%d eh par\n", num);
    } else {
        printf("%d eh impar\n", num);
    }

    
    while (num != 0) {
        digito = num % 10; 
        soma += digito;   
        num /= 10;        
    }

        printf("A soma dos algarismos de %d eh %d\n", numN, soma);

    return 0;
}