#include <stdio.h>

/* EXERCICIO 12!

Fa�a um programa que calcula o saldo de uma conta banc�ria tendo como entrada o saldo inicial e
uma s�rie de opera��es de cr�dito e/ou d�bito finalizada com o valor zero. O programa deve
apresentar como sa�da o total de cr�ditos, o total de d�bitos, a C.P.M.F. paga (0,35% do total de
d�bitos) e o saldo final. Veja um exemplo:

Saldo inicial? 1000.00 ?
Opera��o? ?200.00 ?
Opera��o? +50.00 ?
Opera��o? ?320.00 ?
Opera��o? 100.00 ?
Opera��o? ?200.00 ?
Opera��o? 0 ?
Total de cr�ditos ....: R$ 150.00
Total de d�bitos .....: R$ 520.00
C.P.M.F. paga ........: R$ 1.04
Saldo final ..........: R$ 628.96

*/

int main(){
    float saldo_inical;
    float operacao;
    float creditos = 0;
    float debitos = 0;
    float cpmf;
    float saldo_final = 0;


    printf("\nInforme o saldo inicial: R$");
    scanf("%i", &saldo_inical);

    do{
        printf("Valor: R$");
        scanf("%f", &operacao);

        if( operacao > 0){
            creditos += operacao;
        }

        else if( operacao < 0){
            debitos += operacao;

        }

        

    }while(operacao != 0);

    saldo_final = (saldo_inical + creditos) - debitos;
    debitos = debitos * (-1);
    cpmf = debitos * 0.0035;


    printf("\n");
    printf("Total de Creditos: R$ %.2f.\n", creditos);
    printf("Total de Debitos : R$ %.2f.\n", debitos);
    printf("C.P.M.F: R$ %.2f.\n", cpmf);
    printf("Saldo Final: R$ %.2f.", (saldo_final - cpmf));


    printf("\n\n");
    return 0;
}