#include <stdio.h>

/* EXERCICIO 2!

Crie uma variação do programa anterior de forma que ele imprima as linhas em contagem
decrescente.

 */

int main()
{
    int n;

    printf("\nDigite um valor para N: ");
    scanf("%i", &n);

    printf("\n");

    for (int i = n; i >= 0; i--)
    {

        printf("Linha %i.\n", i);
    }

    printf("\n\n");
    return 0;
}