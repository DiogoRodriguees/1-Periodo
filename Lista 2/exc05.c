#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1° Periodo BCC.
*/

/* 
Exercicio 5.

Escreva um programa que lê um número de 0 a 9 e o imprime por extenso.
O programa deve validar a entrada (0 <= x <= 9) e informar erro, caso ocorra.
*/

int main(){

    int num;

    printf("\nInforme um numero de 0 a 9: ");
    scanf("%i", &num);

    if ( 0 > num || num > 9 ){
        printf("\nEsse numero eh invalido ");
    }

    if ( num == 1){
        printf("\nNumero um.");
    }
    else if( num == 2){
        printf("\nNumero dois.");
    }
    else if( num == 3){
        printf("\nNumero tres.");
    }
    else if( num == 4){
        printf("\nNumero quatro.");
    }
    else if( num == 5){
        printf("\nNumero cinco.");
    }
    else if( num == 6){
        printf("\nNumero seis.");
    }
    else if( num == 7){
        printf("\nNumero sete.");
    }
    else if( num == 8){
        printf("\nNumero sete.");
    }
    else if( num == 9){
        printf("\nNumero sete.");
    }
   
    printf("\n\n");
    return 0;
}