#include <stdio.h>

/* EXERCICIO 02!

Escreva um programa para imprimir e somar os N primeiros termos pares da sequência de
Fibonacci.

*/

int main()
{
    int fibonacci = 0;
    int sequencia = 1;
    int n_primeiros_pares;
    int soma_pares = 0;
    int ultimo_numero = 1;
    int penultimo_numero = 1;
    int conta_pares_fibonacci = 0;

    printf("\n> Infrome a Quantidade de Pares Que Deseja Imprimir: ");
    scanf("%i", &n_primeiros_pares);

    printf("\n| %i Primeiros Pares da Fibonacci |\n", n_primeiros_pares);

    while (conta_pares_fibonacci < n_primeiros_pares)
    {

        fibonacci = ultimo_numero + penultimo_numero;
        penultimo_numero = ultimo_numero;
        ultimo_numero = fibonacci;

        if (fibonacci % 2 == 0)
        {
            printf("\n%2.i - Numero: %d.", sequencia, fibonacci);
            soma_pares = soma_pares + fibonacci;
            conta_pares_fibonacci++;
            sequencia++;
        }
    }

    printf("\n\nSoma dos Numeros pares: %d.", soma_pares);

    printf("\n\n");
    return 0;
}