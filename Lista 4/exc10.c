#include <stdio.h>

/* EXERCICIO 10!

Escreva um programa que calcule a diferen�a entre a soma dos quadrados e o quadrado da soma
dos primeiros N n�meros naturais . O valor N deve ser lido pelo terminal. Vejo o exemplo:
A soma dos quadrados dos 10 primeiros n�meros naturais �:

1� + 2� + ? + 10� = 385

O quadrado da soma dos 10 primeiros n�meros naturais �:

(1 + 2 + ... + 10)� = 55� = 3025
A diferen�a entre ambos � 3025 - 385 = 2640


*/

int main(){
    int n_numeros_naturais;
    int soma_dos_quadrados = 0;
    int quadrado_da_soma = 0;
    int quadrado_soma_resultado;
    int conta;
    int resultado;
    

    printf("\n\n[ Calcule a Diferen�a Entre a Soma dos Quadrados e o Quadrado da Soma]\n");
    printf("\nInforme o Numero N: ");
    scanf("%i", &n_numeros_naturais);

    conta = n_numeros_naturais;

    for( int i=1 ; i<=conta ; i++){

        soma_dos_quadrados = (soma_dos_quadrados + (n_numeros_naturais * n_numeros_naturais));
        n_numeros_naturais--;

    }

    n_numeros_naturais = conta;

    for( int i=1 ; i<=conta ; i++){

        quadrado_da_soma =( quadrado_da_soma + n_numeros_naturais );

        n_numeros_naturais--;

    }

    quadrado_soma_resultado = (quadrado_da_soma * quadrado_da_soma);

    resultado = quadrado_soma_resultado - soma_dos_quadrados  ;

    printf("\nRESULTADO: %i.", resultado);

    printf("\n\n");
    return 0;
}