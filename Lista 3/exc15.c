#include <stdio.h>

int main(){
    int voto;
    int candidato1 = 0;
    int candidato2 = 0;
    int candidato3 = 0;
    int candidato4 = 0;
    int nulo = 0;
    int branco = 0;


    printf("\nNUMERO DOS CANDIDATOS!\n");
    printf("\nCandidato 1: Digito(1)");
    printf("\nCandidato 2: Digito(2)");
    printf("\nCandidato 3: Digito(3)");
    printf("\nCandidato 4: Digito(4)");
    printf("\nVoto Nulo  : Digito(5)");
    printf("\nVoto Branco: Digito(6)");

    printf("\n\n");

    do{
        printf("Digite seu voto: ");
        scanf("%i", &voto);


        if( voto > 0 && voto <= 6 ){
            switch (voto){

                case 1: candidato1++;
                
                break;
                case 2: candidato2++;
                break;

                case 3: candidato3++;
                break;

                case 4: candidato4++;
                break;

                case 5: nulo++;
                break;

                case 6: branco++;
                break;

            
                default: 0;
                break;
            }
        }
        else{
            printf("VOTO INVALIDO!! -- INFORME UM NUMERO DE 1 a 6!!\n\n");
        }


    }while( voto != 0);

    printf("\nVotos do canditado 1: %i", candidato1);
    printf("\nVotos do canditado 2: %i", candidato2);
    printf("\nVotos do canditado 3: %i", candidato3);
    printf("\nVotos do canditado 4: %i", candidato4);
    printf("\nVotos nulos         : %i", nulo);
    printf("\nVotos em branco     : %i", branco);

    printf("\n\n");
    return 0;
}