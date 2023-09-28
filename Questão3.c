#include <stdio.h>

int main() {
    int senhaC; 
    int senhaI;


        scanf("%d", &senhaC);

        printf("senha cadastrada: %04d\n", senhaC);

    do {
        scanf("%d", &senhaI);

        if (senhaI == senhaC) {
            
            printf("senha valida!\n");
        
        } else {
            
            printf("senha invalida!\n");
        
        }
    
    } while(senhaI != senhaC);

    return 0;
}
