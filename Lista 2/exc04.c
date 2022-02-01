#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1° Periodo BCC.
*/

/* 
Ecercicio 4.
Escreva um programa que lê um inteiro representando um ano e verifica se o mesmo é bissexto.
Para um ano ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400.

*/

int main(){
    int ano;

    printf("\nDigite o ano: ");
    scanf("%i" , &ano);

    if ( (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0 ){
        printf("\nEsse ano eh bissexto!");
    }
    else{
        printf("\nEsse ano NAO eh bissexto");
    }

    printf("\n\n");
    return 0;
}