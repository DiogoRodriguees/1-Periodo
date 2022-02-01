#include <stdio.h>

/* EXERCICIO 10!

Escreva um programa que faz a leitura de um número e exibe os dígitos que o formam, enquanto
for diferente de 0.

*/

int main(){
    int numero;
    int x, d;

    printf("\nInforme o numero: ");
    scanf("%i", &numero);

    x = numero;

    do{
        d = x % 10;
        x = x / 10;


        printf("Numero = %i.\n", d);

    }while( x != 0);

    printf("\n\n");
    return 0;
}