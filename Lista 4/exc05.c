#include <stdio.h>

/* EXERCICIO 05!

Escreva um programa que desenha uma caixa de tamanho M x N, com estilo igual ao mostrado no
exemplo abaixo.

Informe as dimensões da caixa: 5 20
+------------------+
|                  |
|                  |
|                  |
+------------------+

*/

int main(){
    int m_linhas;
    int n_colunas;

    printf("\nInforme o Numeros de Linhas: ");
    scanf("%i", &m_linhas);

    printf("Informe o Numeros de Colunas: ");
    scanf("%i", &n_colunas);

    printf("\n| CAIXA DE %i POR %i  | \n\n", m_linhas , n_colunas);

    for ( int i=1 ; i<= m_linhas ; i++){

        if( i == 1){

            for( int j=1 ; j<= n_colunas ; j++ ){

                if( j == 1){
                    printf("+");
                }

                else if( i == 1 && j < n_colunas){
                    printf("-");
                }

                else if(j == n_colunas){
                    printf("+");
                }
            }
        }

        if( i > 1 && i < m_linhas){

            for ( int j=1 ; j<= n_colunas ; j++){

                if( j == 1 || j==n_colunas){

                    printf("|");
                }

                else if( j > 1 && j < n_colunas){

                    printf(" ");

                }
            }
        }

        if( i == m_linhas){

            for( int j=1 ; j<= n_colunas ; j++ ){

                if( j == 1){
                    printf("+");
                }

                else if( i == m_linhas && j < n_colunas){
                    printf("-");
                }

                else if(j == n_colunas){
                    printf("+");
                }
            }
        }


        
        printf("\n");
    }

    printf("\n\n");
    return 0;
}