#include <stdio.h>

int main() {
    char n;
    float salario, aumento;


        printf("Digite o nivel de experiencia (a, b ou c):\n");
        scanf(" %c", &n);  

        printf("Digite o salario atual:\n");
        scanf("%f", &salario);

    
    switch (n) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            break;
        default:
            printf("Nivel de experiencia invalido.\n");
            return 1;  
    }

    
    float novo_salario = salario + aumento;

   
        printf("O novo salario eh: %.2f\n", novo_salario);

    return 0;
}
