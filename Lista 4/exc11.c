#include <stdio.h>
/* EXERCICIO 11!

Um comerciante precisa informatizar o caixa de sua loja. Para isso ele precisa de um programa que
leia uma série de valores correspondendo aos preços das mercadorias compradas por um cliente
(o valor zero finaliza a entrada), calcule o valor total, subtraia deste valor o desconto devido (veja a
tabela abaixo) e, finalmente, mostre o valor a ser pago pelo cliente. C

*/

int main()
{
    int valor_total = 0;
    float valor_a_pagar;
    float valor_do_produto = 0;

    printf("--------------------------------------\n");
    printf("   PRECO R$                DESCONTO   \n");
    printf("--------------------------------------\n\n");

    printf("  ABAIXO DE - R$  50,00.       5 %c\n", 37);
    printf("      ATE   - R$ 100,00.      10 %c\n", 37);
    printf("      ATE   - R$ 200,00.      15 %c\n", 37);
    printf("  ACIMA DE  - R$ 200,00.      20 %c\n", 37);

    printf("\n--------------------------------------\n\n");

    printf("\nPara encerrar Digite o Valor do Produto Igual a Zero!!\n\n");

    do
    {

        printf("Valor do produto: R$");
        scanf("%f", &valor_do_produto);

        valor_total = valor_total + valor_do_produto;

    } while (valor_do_produto != 0);

    if (valor_total < 50)
    {

        valor_a_pagar = valor_total - (valor_total * 0.05);
    }

    else if (valor_total >= 50 && valor_total <= 100)
    {

        valor_a_pagar = valor_total - (valor_total * 0.1);
    }

    else if (valor_total > 100 && valor_total <= 200)
    {

        valor_a_pagar = valor_total - (valor_total * 0.15);
    }

    else if (valor_total > 200)
    {

        valor_a_pagar = valor_total - (valor_total * 0.2);
    }

    printf("\nVALOR A PAGAR: R$ %.2f", valor_a_pagar);

    printf("\n\n");
    return 0;
}