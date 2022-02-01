#include <stdio.h>

/* EXERCICIO 8!

Escreva um programa que faz a leitura de v�rios n�meros inteiros (um a cada itera��o do la�o), at�
que se digite zero. O programa deve imprimir a soma e a m�dia aritm�tica simples dos n�meros
digitados.

*/

int main(){
    int soma_numeros = 0;
    float media;
    int numero;
    int conta_numeros = 0;


    printf("\nDigite zero(0) para sair.\n\n");

    do{
        printf("Informe o numero: ");
        scanf("%i", &numero);

        soma_numeros = soma_numeros + numero;
        conta_numeros++;


    }while( numero != 0);

    media = soma_numeros / (conta_numeros - 1);

    printf("\nSoma = %i.", soma_numeros);
    printf("\nMedia = %.1f.", media);

    printf("\n\n");
    return 0;
}