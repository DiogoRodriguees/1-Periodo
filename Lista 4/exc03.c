#include <stdio.h>

/* EXERCICIO 03!

Dados dois números naturais m e n, escreva um programa que exibe um retângulo formado por
caracteres ?X?, com m caracteres de altura e n caracteres de largura.

Para m = 10 e n = 3: XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX 

*/
int main(){
    int m_linhas;
    int n_colunas;

    printf("\nInforme o Numeros de Linhas: ");
    scanf("%i", &m_linhas);

    printf("Informe o Numeros de Colunas: ");
    scanf("%i", &n_colunas);

    printf("\n\n");

    printf("\n| CAIXA  %i POR  %i | \n\n", m_linhas , n_colunas);

    for ( int i=1 ; i<= m_linhas ; i++){

        for( int j=1 ; j<= n_colunas ; j++ ){

            printf("X");


        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}