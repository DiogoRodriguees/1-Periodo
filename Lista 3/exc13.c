#include <stdio.h>

/* EXERCICIO 13!

A s�rie de Fibonacci � 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois primeiros termos s�o iguais a 1 e, a
partir do terceiro, o termo � dado pela soma dos dois termos anteriores. Dado um n�mero n?3,
exiba o n-�simo termo da s�rie de Fibonacci.

*/

int main(){
    int numero;
    int soma;
    int a = 1;
    int b = 1;

    printf("\nInforme o numero: ");
    scanf("%i", &numero);


    if ( numero > 3){
        for ( int i=3 ; i<= numero ; i++ ){

            soma = a + b;
            b = a;
            a = soma;

        }
        printf("\n> %i Termo da Fibonacci: %i", numero , a); 

    }
    else if( numero == 1){
        printf("\n > %i termo da fibonacci: 1", numero);
    }
    else if( numero == 2){
        printf("\n > %i termo da fibonacci: 1", numero);
    }
    else if( numero == 3){
        printf("\n > %i termo da fibonacci: 2", numero);
    }



    printf("\n\n");
    return 0;
}