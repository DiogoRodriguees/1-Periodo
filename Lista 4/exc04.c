#include <stdio.h>

/* EXERCICIO 04!

Dados dois números naturais m e n, escreva um programa que exibe um retângulo formado por
caracteres ?X? intercalados com ?-?, tendo m caracteres de altura e n caracteres ?X? de largura. As
linhas devem estar contidas entre colchetes.

Exemplo: m = 3 e n = 9 
[X-X-X-X-X-X-X-X-X]
[X-X-X-X-X-X-X-X-X]
[X-X-X-X-X-X-X-X-X]


*/
int main(){
    int m_linhas;
    int n_colunas;
    int imprime_anderline = 0;

    printf("\nInforme o Numeros de Linhas: ");
    scanf("%i", &m_linhas);

    printf("Informe o Numeros de Colunas: ");
    scanf("%i", &n_colunas);

    printf("\n");
    
    printf("\n\t| CAIXA %i POR %i  | \n\n", m_linhas , n_colunas);

    for ( int i=1 ; i<= m_linhas ; i++){

        printf("\t[");

        for( int j=1 ; j<= n_colunas ; j++ ){

            printf("X");


            while (imprime_anderline < j && j <n_colunas){
               
               printf("-");
               
                imprime_anderline++;
            }

            
        }
        
        imprime_anderline = 0;


        printf("]");
        printf("\n");
    }


    printf("\n\n");
    return 0;
}