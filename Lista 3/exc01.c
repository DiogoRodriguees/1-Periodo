#include <stdio.h>

/* ECERCICIO 1!

Escreva um programa que faz a leitura de um valor N e imprime N linhas de texto exibindo o
número da linha corrente.

*/

int main(){
    int n;

    printf("\nDigite um valor para N: ");
    scanf("%i", &n);

    printf("\n");

    for ( int i=0 ; i<=n ; i++){
        printf("Linha %i.\n", i);
    }


    printf("\n\n");
    return 0;
}