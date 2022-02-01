#include <stdio.h>

/* EXERCICIO 07!

Dado um número natural m, escreva um programa que exibe um triângulo centralizado formado por
caracteres ?X?, com m caracteres de altura. OBS: a quantidade de X?s em cada linha é sempre
ímpar e cresce em 2 unidades: 1, 3, 5, 7, 9, ...

Para m = 6:
     X
    XXX
   XXXXX
  XXXXXXX
 XXXXXXXXX
XXXXXXXXXXX

*/
int main(){
    int m_linhas;
    int espacos;


    printf("\n> Informe a Quantidade de Linhas: ");
    scanf("%i", &m_linhas);

    espacos = m_linhas -1;

    printf("\n| PIRAMEDE COM %i LINHAS DE ALTURA |\n", m_linhas);

    for( int i=1 ; i <= (m_linhas*2) ; i+=2 ){

        for ( int j=1 ; j<=espacos ; j++){

            printf(" ");

        }
        espacos--;


        for ( int j=1 ; j<=i ; j++){

            printf("X");

        }


        printf("\n");
    }

    printf("\n\n");
    return 0;
}