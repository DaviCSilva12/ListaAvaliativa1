#include <stdio.h>

int main() {
    int ano;

    
        printf("Digite um ano de 1800 ate 2022:\n");
        scanf("%d", &ano);

    
    if ((ano >= 1896 && ano <= 2020) && (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))) {
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }

   
    if (ano == 1930 || ano == 1934 || ano == 1938 || ano == 1950 || ano == 1954 || ano == 1958 || ano == 1962 || ano == 1966 || ano == 1970 || ano == 1974 || ano == 1978 || ano == 1982 || ano == 1986 || ano == 1990 || ano == 1994 || ano == 1998 || ano == 2002 || ano == 2006 || ano == 2010 || ano == 2014 || ano == 2018) {
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }

   
    if (!((ano >= 1896 && ano <= 2020) && (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))) && !(ano == 1930 || ano == 1934 || ano == 1938 || ano == 1950 || ano == 1954 || ano == 1958 || ano == 1962 || ano == 1966 || ano == 1970 || ano == 1974 || ano == 1978 || ano == 1982 || ano == 1986 || ano == 1990 || ano == 1994 || ano == 1998 || ano == 2002 || ano == 2006 || ano == 2010 || ano == 2014 || ano == 2018)) {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", ano);
    }

    return 0;
}
