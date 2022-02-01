#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1° Periodo BCC.
*/

/* 
Exercicio 2.

Escreva um programa que lê um número inteiro e,
informa se o mesmo é par, ímpar ou zero.
Dica: um número par possui divisão inteira exata por 2, isto é, com resto 0.
*/


int main(){
    int num;

    printf("\nImforme um numero inteiro: ");
    scanf("%i", &num);

    if ( num % 2 == 0 && num != 0){
        printf("\nO numero digitado eh par!");
    }   
    else if ( num % 2 == 1 ){
        printf("\nO numero e impar!");
    }
    else if ( num == 0 ){
        printf("\nO numero digitado eh nulo!");
    }

    printf("\n\n");
    return 0;
}
