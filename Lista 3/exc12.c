#include <stdio.h>

/* EXERCICIO 12!

Escreva um programa que verifica se um número inteiro é primo.

*/
int main(){
    int numero;
    int count=0;
    

    printf("\nInforme o numero: ");
    scanf("%i", &numero);
    

    for ( int i=1 ; i<= numero; i++){

        if ( (numero % i) == 0 ){
            count++;
        }
    }

    if( count == 2 || count == 1){
        printf("\nO numero eh primo!");
    }
    if( count !=  2 && count != 1){
        printf("\nO numero nao eh primo!");
    }


    printf("\n\n");
    return 0;
}