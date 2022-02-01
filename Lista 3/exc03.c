#include <stdio.h>

/* EXERCICIO 3! 

Escreva um programa que imprime a tabuada de um número informado. 
 
*/

int main(){
    int num;
    int multiplicador = 1;


    printf("Qual tabuada você deseja: ");
    scanf("%i", &num);


    /* Tabuada */
    printf("\n");

    for ( int i=0 ; i<10 ; i++){

        printf("%i X %i = %i.\n", num, multiplicador,(num*multiplicador));
        multiplicador++;

        
    }


    printf("\n\n");
    return 0;
}