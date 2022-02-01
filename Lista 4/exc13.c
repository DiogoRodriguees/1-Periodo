#include <stdio.h>

/* EXERCICIO 13!

 Escreva um programa que ?desenha? um tablado contendo um ?personagem?, que dever� ser
controlado pela entrada dos caracteres WASD:
a. As posi��es vazias s�o impressas com ?.? e, o personagem, com o caractere ?#?;
b. O personagem tem a posi��o inicial (5,10) (linha, coluna);
c. A cada itera��o, o programa deve solicitar uma entrada do tipo char ao usu�rio (WASD);
d. Ap�s solicitar a entrada, deve (re)imprimir o tablado, com o personagem na posi��o
atualizada. Os caracteres WASD correspondem �s 4 dire��es poss�veis:

?W? ? cima (decrementar linha)
?S? ? baixo (incrementar linha)
?A? ? esquerda (decrementar coluna)
?D? ? direita (incrementar coluna)
e. O tamanho do tablado � 10 linhas x 20 colunas;
f. O personagem n�o deve sair do tablado.
g. Voc� pode utilizar os caracteres de sua prefer�ncia para representar o tablado e o
personagem.
Observe o exemplo:

MOVA O PERSONAGEM!
....................
....................
....................
....................
....................
..........#.........
....................
....................
....................
....................
Entre com a dire��o (WASD): W

MOVA O PERSONAGEM!
....................
....................
....................
....................
..........#.........
....................
....................
....................
....................
....................
Entre com a dire��o (WASD):

*/

int main(){
    int m = 5;
    int n = 10;
    char move;

    do{
        printf("\nMova o Personagem!\n");
        for( int i=1 ; i<=10 ; i++){
            for(int j=1 ; j<=20 ; j++){

                if (i == m && j == n){

                    printf("/*\\");

                }

                else{
                
                    printf(" . ");
                }

            }
            printf("\n");
        }

        printf("\nEntre Com a Direcao (WASD): ");
        scanf(" %c", &move);
        printf("\n");
        printf("--------------------------------------------------\n\n");

        if( (m >= 1  && m <= 10) && ( n >= 1 && n <= 20) ){

            switch (move){

                case 'a': n--;
                break;  

                case 'w': m--;
                break;

                case 's': m++;
                break;

                case 'd': n++;
                break;
                    
                default: move = 0;
                break;
            } 
            
        }

        if( m < 1){
            m = 1;
        }
        if( m > 10){
            m = 10;
        }
        if( n < 1){
            n = 1;
        }
        if( n > 20){
            n = 20;
        }

    }while( move!= 0 );

    printf("\n\n");
    return 0;
}