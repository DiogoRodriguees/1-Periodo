#include <stdio.h>

/* EXERCICIO 01!

Escreva um programa que imprime a tabuada completa, de 1 a 10.

*/


int main(){
    int numer_tabuada;
    int multiplicador;

    printf("\n| TABUADA COMPLETA |");

    for( int i=1 ; i<=10 ; i++ ){

        printf("\n\n|  TABUADA DO %i  |  ", i);

        for( int j=1 ; j<=10 ; j++){

            printf("\n > %i  X %2.i  = %3.i.", i, j, (i*j));

        }
        printf("\n");
    }


    printf("\n\n");
    return 0;
}