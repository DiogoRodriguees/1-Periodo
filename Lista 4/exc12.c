#include <stdio.h>

/* EXERCICIO 12!

Faça um programa que calcula o saldo de uma conta bancária tendo como entrada o saldo inicial e
uma série de operações de crédito e/ou débito finalizada com o valor zero. O programa deve
apresentar como saída o total de créditos, o total de débitos, a C.P.M.F. paga (0,35% do total de
débitos) e o saldo final. Veja um exemplo:

Saldo inicial? 1000.00 ?
Operação? ?200.00 ?
Operação? +50.00 ?
Operação? ?320.00 ?
Operação? 100.00 ?
Operação? ?200.00 ?
Operação? 0 ?
Total de créditos ....: R$ 150.00
Total de débitos .....: R$ 520.00
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