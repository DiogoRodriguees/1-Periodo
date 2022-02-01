#include <stdio.h>

int main(){
    char caracter = 33;
    int inicio = 33;
    int final = 126;


    printf("DEC  OCT  HEX  CHAR\n\n ");
    

    for( int i=inicio ; i<= final; i++){

        printf("%d %o %X %c\n", caracter , caracter , caracter , caracter);

        caracter++;
        inicio++;

    }


    printf("\n\n");
    return 0;
}