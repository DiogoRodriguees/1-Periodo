#include <stdio.h>

/* EXERCICIO 9!

Escreva um programa que faz a leitura de v�rios n�meros inteiros (um a cada itera��o do la�o), at�
que se digite zero. O programa deve imprimir o maior e o menor entre os n�meros digitados.

*/

int main(){
    int numero;
    int compara = 0;
    int maior = 0;
    int menor = 10000;

    printf("\nDigite 0 para sair.\n\n");


    do{
        printf("Informe o numero: ");
        scanf("%i", &numero);

        if( numero > maior && numero != 0 ){

            maior = numero;
            compara = maior;

            if( compara < menor){

                menor = compara;
            
            }

        }

    }while( numero != 0 );

    printf("\nMaior = %i", maior);
    printf("\nMenor = %i", menor);

    printf("\n\n");
    return 0;
}