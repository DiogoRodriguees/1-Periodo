#include <stdio.h>

/* 
NOME: Diogo Rodrigues.
TURMA: 1� Periodo BCC.
*/

/* 
Ecercicio 4.
Escreva um programa que l� um inteiro representando um ano e verifica se o mesmo � bissexto.
Para um ano ser bissexto (leap year), ele precisa:
a. Ser divis�vel por 4 e n�o divis�vel por 100, OU, ser divis�vel por 400.

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