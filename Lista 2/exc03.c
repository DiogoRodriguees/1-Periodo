#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1� Periodo BCC.
*/

/* 
Exercicio 3.
Escreva um programa que l� dois n�meros naturais e informa o maior. 
O programa tamb�m deve informar se os n�meros s�o iguais. 
Caso o utilizador entre com n�meros negativos, o programa
deve informar um erro e n�o realizar as demais verifica��es.

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