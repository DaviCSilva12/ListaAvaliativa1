#include <stdio.h>

int main() {
    int numero1, numero2;
    
        printf("Digite o valor do numero1:\n");
        scanf("%d", &numero1);
        printf("Digite o valor do numero2:\n");
        scanf("%d", &numero2);
    
    if (numero1 == numero2) {
        
        printf("Os valores lidos sao iguais\n");
    } else {
        // Encontra o maior valor entre A e B
        int maior, menor;
        if (numero1 > numero2) {
            maior = numero1;
            menor = numero2;
        } else {
            maior = numero2;
            menor = numero1;
        }
        
        printf("O maior valor eh: %d\n", maior);
        
        if (maior % menor == 0) {
            printf("%d eh multiplo de %d\n", maior, menor);
        } else {
            printf("%d nao eh multiplo de %d\n", maior, menor);
        }
    }
    
    return 0;
}