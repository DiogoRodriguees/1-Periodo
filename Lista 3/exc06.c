#include <stdio.h>

/* EXERCICIO 6!

Escreva um programa que calcula o somatório de um número natural X fornecido pelo teclado.

*/

int main(){
    int num;
    int fator;
    int soma = 0;


    printf("\nInforme o numero: ");
    scanf("%i", &num);

    fator = num;

    for ( int i=0 ; i<=fator ; i++ ){

        soma = soma + num;
        num--;

    }

    printf("\nSomatorio do numero digitado.");
    printf("\n> %i! = %i.", fator , soma);

    printf("\n\n");
    return 0;
}