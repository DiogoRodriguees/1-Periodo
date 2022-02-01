#include <stdio.h>

/* EXERCICIO 08!

Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do
Triângulo de Floyd:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/
int main(){
    int n_linhas;
    int triangulo_de_floyd = 1;

    printf("\nInforme o Numeros de Linhas: ");
    scanf("%i", &n_linhas);

    printf("\n| TRIANGULO DE FLOYD |\n\n");

    for ( int i=1 ; i<= n_linhas ; i++){

        for ( int j=1 ; j<=i ; j++){

            printf("%i ", triangulo_de_floyd);

            triangulo_de_floyd++;

        }

       
        printf("\n");
    }

    printf("\n\n");
    return 0;
}