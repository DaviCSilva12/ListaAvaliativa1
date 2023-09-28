#include <stdio.h>

int main(){
    char n[10];
    int soma = 0;
    int caractere;
    
    for(int i = 0; i < 10; i++){
    caractere = getchar();
        if(caractere == '\n' ){
            break;
        }
        n[i] = caractere;
        soma += (caractere - '0'); 
    }

    int n2 = atoi(n);

    if(n2 % 2 == 0){
        printf("%d eh par\n", n2);
        printf("A soma dos algarismos de %d eh %d", n2, soma);
    } else{
        printf("%d eh  ímpar\n", n2);
        printf("A soma dos algarismos de %d eh %d", n2, soma);
    }

    return 0;
}