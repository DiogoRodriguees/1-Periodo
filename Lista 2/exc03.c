#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1° Periodo BCC.
*/

/* 
Exercicio 3.
Escreva um programa que lê dois números naturais e informa o maior. 
O programa também deve informar se os números são iguais. 
Caso o utilizador entre com números negativos, o programa
deve informar um erro e não realizar as demais verificações.

*/

int main(){
    int num1;
    int num2;

    printf("\nInforme o primeiro numero: ");
    scanf("%i", &num1);

    printf("\nInforme o segundo numero: ");
    scanf("%i", &num2);

    if ( num1 == num2 ){
        printf("\nOs numero digitados sao iguais");
    }
    if ( num1 < 0 || num2 < 0 ){
        printf("\nErro! \nUm dos numeros digitados eh menor que 0!");
    }

    if ( num1 > num2 ){
        printf("\nO maior numero eh: %i", num1);
    }
    else if( num2 > num1 ){
        printf("\nO maior numero eh: %i", num2);
    }


    return 0;
}