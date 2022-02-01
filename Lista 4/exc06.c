#include <stdio.h>

/* EXERCICIO 06!

Dado um número natural m, escreva um programa que exibe um triângulo retângulo formado por
caracteres ?X?, com m caracteres de altura.

Para m = 5: 
XXXXX
 XXXX
  XXX
   XX
    X

*/
int main(){
    int m_linhas;
    int imprime_x;
    int conta_espacos = 0;

    printf("\nInforme o Numeros de Linhas: ");
    scanf("%i", &m_linhas);

    printf("\n| TRIANGULO  |\n\n");

    for ( int i=m_linhas ; i>= 0 ; i--){

        imprime_x = i;

        if(i < m_linhas){

            for( int j = 1 ; j <= conta_espacos; j++ )

            printf(" ");

        }
        
        for (int j=0 ; j<= imprime_x ; j++){

            printf("X");

        }
        
        conta_espacos ++;
        
        printf("\n");

    }

    printf("\n\n");
    return 0;
}