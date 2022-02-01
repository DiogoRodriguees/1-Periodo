#include <stdio.h>

/* EXERCICIO 14!

Os números seriais de produtos de uma certa empresa são formados por um número de 10 dígitos
seguidos de 1 dígito verificador, calculado conforme exemplificado a seguir. Escreva um programa
que verifica se um um número serial de 11 dígitos (10 + verificador) está correto.
Seja num_serial = 45398016422 o número da conta (2 é o dígito verificador).

a. Somar os 10 primeiro dígitos de num_serial
i. soma = 4+5+3+9+8+0+1+6+4+2 = 42
b. Obter o resto da divisão da soma por 10
i. resto de 42 por 10 é 2 (dígito verificador).
c. Comparar o dígito verificador encontrado com o último dígito do número serial

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