#include <stdio.h>

/* EXERCICIO 11!

O quadrado de um n�mero natural n � dado pela soma dos n primeiros n�meros �mpares
consecutivos.

*/

int main(){
    int numero;
    int soma = 0;
    int quadrado = 1;


    printf("\nInforme o valor de n: ");
    scanf("%i", &numero);


    for ( int i=1 ; i<=numero ; i++){
        soma = soma + quadrado;
        quadrado = quadrado + 2;
    }

    printf("\nQuadrado do numero digitado: %i.", soma);
    printf("\n\n");
    return 0;
}