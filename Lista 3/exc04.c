#include <stdio.h>

/* EXERCICIO 4! 

Escreva um programa que imprime os N primeiros ímpares. 

*/

int main(){
    int imprime_impares;


    printf("\nQuantos numeros impares deseja imprimir: ");
    scanf("%i", &imprime_impares);


    for ( int i=1 ; i<=(imprime_impares * 2); i = i + 2){

        printf("%i, ", i);

    }


    printf("\n\n");
    return 0;
}