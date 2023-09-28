#include <stdio.h>

int main() {
    char nivel;
    float salarioA;
    float aumento; 
    float SalarioN;

    scanf("%c", &nivel);
    scanf("%f", &salarioA);

        if(nivel == 'a'){
            aumento = salarioA * 0.05;
        } else if (nivel == 'b'){
            aumento = salarioA * 0.07;
        } else if (nivel == 'c'){
            aumento = salarioA * 0.08;
        } else{
            aumento = 0.0;
            printf("Nível de experiência inválido.\n");
        }

        SalarioN = aumento + SalarioA;

        printf("R$ %.2f\n", SalarioN);

    return 0;
}