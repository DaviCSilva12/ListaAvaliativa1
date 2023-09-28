#include <stdio.h>

int main() {
    int senhacadastrada, senhainserida, tentativas = 0;

    
        printf("Digite a senha de 4 digitos para cadastrar:\n");
        scanf("%d", &senhacadastrada);

   
    if (senhacadastrada < 1000 || senhacadastrada > 9999) {
        printf("Senha invalida. A senha deve ser um número de 4 digitos.\n");
        return 1;
    }

 
    while (1) {
        printf("Digite a senha para validar:\n");
        scanf("%d", &senhainserida);
        tentativas++;

       
        if (senhainserida == senhacadastrada) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }

        
        if (tentativas >= 3) {
            printf("Limite de tentativas excedido. O programa sera encerrado.\n");
            break;
        }
    }

    return 0;
}
