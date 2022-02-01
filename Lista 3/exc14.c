#include <stdio.h>

/* EXERCICIO 14!

Os n�meros seriais de produtos de uma certa empresa s�o formados por um n�mero de 10 d�gitos
seguidos de 1 d�gito verificador, calculado conforme exemplificado a seguir. Escreva um programa
que verifica se um um n�mero serial de 11 d�gitos (10 + verificador) est� correto.
Seja num_serial = 45398016422 o n�mero da conta (2 � o d�gito verificador).

a. Somar os 10 primeiro d�gitos de num_serial
i. soma = 4+5+3+9+8+0+1+6+4+2 = 42
b. Obter o resto da divis�o da soma por 10
i. resto de 42 por 10 � 2 (d�gito verificador).
c. Comparar o d�gito verificador encontrado com o �ltimo d�gito do n�mero serial

*/

int main(){
    int numero;
    int soma_numeros = 0;
    int compara;
    int digito_verificador = 2;


    prin("\nInforme os digitos do serial.\n");


    for ( int i=0 ; i<10 ; i++){
        printf("\nNumero: ");
        scanf("%i", &numero);

        soma_numeros = soma_numeros + numero;

    }
    
    compara = soma_numeros % 10;

    if( compara == digito_verificador ){
        printf("\nO numero do serial esta correto!");
    }
    else{
        printf("\nCodigo do serial incorreto!");
    }

    
    printf("\n\n");
    return 0;
}