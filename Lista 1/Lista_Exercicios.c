#include <stdio.h>
#include <locale.h>

#define COLOR_FG_GREEN   32
#define COLOR_FG_BLUE    34

/* 
Nome: Diogo Rodrigues.
Turma: 1° Periodo do BCC.
*/

/* Todos os exercicios foram chamados na função main */


int exc1(){

    printf("\033[%dm", 34);
    printf("\n*Exercício 1!+ \n");
    printf("Bem vindo a codificação em C/C++.\n\n");
    
    return 0;
}

int exc2(){

    printf("\033[%dm", 32);
    printf("\n*Exercício 2!\n");
    printf("Para criar programas em C, voce precisa de um editor de texto e um compilador.\n");
    printf("O compilador GCC (GNU Compiler Collection) é muito utilizado para o desenvolvimento de software.\n");
    printf("Ele inclui front ends para as linguagens C, C++, Objective-C, Fortran, Ada e Go.\n\n");

    return 0;
}

int exc3(){
    int numero = 1;
    float pi = 3.14;
    char caracter = 'C';

    printf("\033[%dm", 34);
    printf("\n*Exercício 3!\n");
    printf("Int   - Número: %i\n", numero);
    printf("Float - PI: %f\n", pi);
    printf("Char  - Caracter: %c\n\n", caracter);

    return 0;
}

int exc4(){
    int a, b;
    int soma;
    int subt;

    printf("\033[%dm", 32);
    printf("\n*Exercício 4!\n");

    printf("Insira o valor de A: ");
    scanf("%i", &a);

    printf("Insira o valor de B: ");
    scanf("%i", &b);

    soma = ( a + b);
    subt = ( a - b);

    printf("\nSoma de A e B: %i.\n", soma);
    printf("Subtração de A e B: %i.\n\n", subt);

    return 0;
}

int exc5(){
    int a, b;
    int multiplica;
    int divisao_inteira;
    int resto_divisao;

    printf("\033[%dm", 34);
    printf("\n*Exercício 5!\n");

    printf("Digite o valor de A: ");
    scanf("%i", &a);

    printf("Digite o valor de B: ");
    scanf("%i", &b);

    multiplica = ( a * b);
    divisao_inteira = ( a / b);
    resto_divisao = ( a % b);

    printf("\nResultado da multiplicação de A e B: %i.\n", multiplica);
    printf("Resultado da divisão inteira de A e B: %i.\n", divisao_inteira);
    printf("Resto da divisão entre A e B: %i.\n\n", resto_divisao);

    return 0;
}

int exc6(){
    int num;

    printf("\033[%dm", 32);
    printf("\n*Exercício 6!\n");

    printf("Qual tabuada você deseja: ");
    scanf("%i", &num);

    /* Tabuada */
    printf("\n");
    printf("%i X 1 = %i.\n", num, (num*1));
    printf("%i X 2 = %i.\n", num, (num*2));
    printf("%i X 3 = %i.\n", num, (num*3));
    printf("%i X 4 = %i.\n", num, (num*4));
    printf("%i X 5 = %i.\n", num, (num*5));
    printf("%i X 6 = %i.\n", num, (num*6));
    printf("%i X 7 = %i.\n", num, (num*7));
    printf("%i X 8 = %i.\n", num, (num*8));
    printf("%i X 9 = %i.\n", num, (num*9));
    printf("%i X 10 = %i.\n\n", num, (num*10));

    return 0;
}

int exc7(){
    float a, b, c;
    float media;
    float media_ponderada;
    float peso1 = 0.1;
    float peso2 = 0.5;
    float peso3 = 0.4;

    printf("\033[%dm", 34);
    printf("\n*Exercício 7!\n");

    printf("Digite o Valor de A: ");
    scanf("%f", &a);

    printf("Digite o Valor de B: ");
    scanf("%f", &b);

    printf("Digite o Valor de C: ");
    scanf("%f", &c);

    media = ( a + b + c)/3;
    media_ponderada = ( ( a * peso1) + ( b * peso2) + ( c* peso3) );

    printf("\nMédia: %.2f\n", media);
    printf("Média ponderada: %.2f", media_ponderada);
    printf("\n\n");

    return 0;
}

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    exc1();
    exc2();
    exc3();
    exc4();
    exc5();
    exc6();
    exc7(); 

    return 0;
}