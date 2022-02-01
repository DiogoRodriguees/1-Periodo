#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1° Periodo BCC.
*/

/* 
Exercicio 01.
Escreva um programa que lê um número x do terminal e,
informa seu valor absoluto |x|, isto é:

A. |x| = x, se x ? 0
B. |x| = -x, se x < 0

*/


int main(){

    int x;
    int modulo;

    printf("\nInforme o valor de X: " );
    scanf("%i", &x);

    if ( x > 0 ){
        printf("\nO modulo de X eh: %i!", x);
    }
    else if( x < 0 ){
        modulo = x * (-1);
        printf("\nO modulo de X eh: %i", modulo);
    }

    else if ( x == 0) {
        printf("\nO numero digitado eh nulo!");
    }

    return 0;
}