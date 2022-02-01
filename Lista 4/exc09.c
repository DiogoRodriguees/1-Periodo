#include <stdio.h>

/* EXERCICIO 09!

Escreva um programa que exibe um MENU com 4 opções. Cada opção deve executar uma
operação. O programa opera sobre duas variáveis, A e B, que devem ser lidas por meio de opções
do MENU. Dica: utilize um laço que só termina quando a opção for 5. Observe o exemplo:

-----------------------------------------
SUM SUPREME! A: 0 B: 0 // mostra A e B   
-----------------------------------------
1 - Set A // ler do entrada.
2 - Set B // ler da entrada.
3 - Show A+B // soma e mostra.
4 - Show AxB // multiplica e mostra.
5 - Exit.

*/

int main(){

    int a=0;
    int b=0;
    int operador;
    int saida = 0;
    int deseja_continuar = 1;

    printf("\nInforme o Valor de A: ");
    scanf("%i", &a);

    printf("Informe o Valor de B: ");
    scanf("%i", &b);

    do{
        printf("\n\n----------------------------------------------\n");
        printf("                    MENU                     ");
        printf("\n----------------------------------------------\n\n");

        printf("1 - Exibir Valor de A. \n");
        printf("2 - Exibir Valor de B. \n");
        printf("3 - Soma de A + B. \n");
        printf("4 - Multiplicacao de A * B. \n");
        printf("5 - Sair. \n");

        printf("\n----------------------------------------------\n\n");

        
        printf("\nQual da Opcoes Acima Voce Deseja Realizar: ");
        scanf("%i", &operador);


        switch (operador){
        
            case 1: printf("\nValor de A: %i.", a); 
            break;

            case 2:printf("\nValor de B: %i.", b);
            break;


            case 3:printf("\nSoma de A + B: %i.", ( a + b)); 
            break;

            case 4:printf("\nMultiplicacao de A * B: %i.", (a * b)); 
            break;

            case 5: saida = 5;
            break;

            default:printf("\nVoce Digitou uma Opcao invalida!!");
            break;
        }

        
        if ( operador != 5){
            printf("\n\n\n\nDeseja Fazer Outra operacao: (1)SIM (2)NAO: ");
            scanf("%i", &deseja_continuar);

            if ( deseja_continuar == 1){

                saida = 1;

            }
            else if ( deseja_continuar != 1){

                saida = 5;

            }
        }
        printf("\n\n\n");

    }while ( saida != 5);

    printf("\n\n");
    return 0;
}