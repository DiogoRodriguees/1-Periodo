#include <stdio.h>

/* EXERCICIO 7!

Escreva um programa que calcula o fatorial de um número natural. Por definição: 0! = 1 e 1! = 1

*/

int main(){
    int num;
    int fator;
    int soma = 1;


    printf("\nInforme o numero: ");
    scanf("%i", &num);

    fator = num;

    if ( num == 0 ){
        printf("\n0! = 1");
    
    }
    else if ( num > 0){
        for ( int i=1 ; i<=fator ; i++ ){
            soma = soma * num;
            num--;
        }

        printf("\n%i! = %i.", fator, soma);

    }
    else if ( num < 0 ){
        printf("\nNumero digitado invalido.");
    }


    printf("\n\n");
    return 0;
}