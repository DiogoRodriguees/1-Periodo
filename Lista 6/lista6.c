#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void printString(char str[]){
    printf("\n%s", str);

}

void printStringReversed(char str[]){
    int tamanho_da_string = strlen(str);

    printf("\nSaida: ");
    for( int i=tamanho_da_string-1; i>=0 ; i--){
       printf("%c", str[i]);
    }
}

void printStringSparse(char str[]){
    int tamanho_da_string = strlen(str);
    
    printf("\nSaida: ");
    for(int i=0 ; i<tamanho_da_string ; i++){
        printf("%c", str[i]);

        if(i<tamanho_da_string-1){
            printf("*");
        }
    }
}

void printStringCustom(char str[], char separator){
    int tamanho_da_string = strlen(str);

    printf("\nSaida: ");
    for(int i=0 ; i<tamanho_da_string ; i++){
        printf("%c", str[i]);
        if(i<tamanho_da_string-1){
            printf("%c", separator);
        }
    }
}

void stringReport(char str[]){
    int letras = 0;
    int digitos = 0;
    int simbolos = 0;
    int tamanho_da_string = strlen(str);
 
    for ( int i=0 ; i<tamanho_da_string ;i++){
        
        if( str[i] > 32 && str[i] < 126){

            if( str[i] > 64 && str[i] < 91){
                letras++;
            }

            if(str[i] >96 && str[i] < 123){
                letras++;
            }

            if(str[i] > 47 && str[i] < 58){
                digitos++;
            }

            else if (str[i]<=47 || str[i]>=123){
                simbolos++;
            }

            else if(str[i]<=64 && str[i]>=58){
                simbolos++;
            }

            else if(str[i]<=96 &&str[i]>=91){
                simbolos++;
            }

        }

    }

    printf("\nTotal de Letras(Maiusculas e Minusculas): %d", letras);
    printf("\nTotal de Simbolos.......................: %d", simbolos);
    printf("\nTotal de Digitos........................: %d", digitos);

}

void stringToUpper(char str[]){ 
    int tamanho_da_string = strlen(str);

    for( int i=0 ; i<tamanho_da_string; i++){
        if(str[i] > 96 && str[i] < 123){
            str[i]-= 32;
        }
    }

    printf("\n%s", str);
}

int strcmpNoCase(char s1[], char s2[]){

    stringToUpper(s1);
    stringToUpper(s2);

    int compara = strcmp(s1, s2);

    return compara;
}

int countWords(char str[]){
    int size_string = strlen(str);
    int count_words = 1;

    for(int i=0 ; i < size_string ; i++){

        if((str[i] < 65 && str[i] > 122) || (str[i] < 97 && str[i] > 90)){
            count_words++;
        }


    }
    return count_words;
}

int countWordsPlus(char str[]){
    int count_space = 0;
    int count_words = 0;
    int size_string = strlen(str);

    for(int i=0 ; i < size_string ; i++){

        if(str[i] >= 65 && str[i]  <= 122)
        {
            if(str[i] > 97 || str[i] < 90){
                count_space = 0;
            }
            
        }
        else{
            count_space ++;
        }

        if(count_space == 1 ){
            count_words++;
        }
        
    }

    if(count_space ==0){
        count_words++;
    }

    return count_words;
}

void stringCapitalize(char str[]){
    int first_letter = 0;
    int count_space = 0;
    int size_string = strlen(str);

    for(int i=0 ; i < size_string ; i++){

        if(str[i] >= 65 && str[i]  <= 122)
        {
            if(str[i] >= 97 || str[i] < 90){
                if(str[i] >= 97 && first_letter == 0){
                    str[i] -=32;
                    printf("%c", str[i]);
                    first_letter++;
                }
                else if(str[i] >= 97 && first_letter !=0){
                    printf("%c", str[i]);
                }
                else if(str[i] < 90 && first_letter !=0){
                    printf("%c", str[i]+32);
                }
                else if(str[i] < 90 && first_letter ==0){
                    printf("%c", str[i]);
                    first_letter++;

                }
                
            }
            count_space = 0;
            
        }  
        else {
            count_space++;
        }
        if(count_space != 0){
            printf(" ");

        }
        if(count_space == 1){
            first_letter = 0;
        }
        
    }

}

int stringCompare(char str1[], char str2[]){
    int size_str1 = strlen(str1);
    int size_str2 = strlen(str2);
    int retorno;

    if( size_str2 > size_str1){
        size_str2  = size_str1;
    }

    for( int i=0 ; i < size_str1 ; i++){
        if(str1[i] == str2[i]){
            retorno = 0;
        }
        if(str1[i] > str2[i]){
            retorno = -1;
        }
        if(str1[i] < str2[i]){
            retorno = 1;
        }
    }

    return retorno;
}

void stringTrim(char str[]){
    int size_string = strlen(str);
    int firts_letter = 0;
    int space = 0;


    for(int i=0 ; i<size_string ;i++){
        if(str[i] >=65 && str[i] <=122){
            if(str[i] >= 90 || str[i] >=97){
                firts_letter = 1;
                printf("%c", str[i]);
                space = 0;
            
            }
        }
        else if(firts_letter == 1){
            space++;
        }
        
        if(space == 1){
            printf(" ");
        }
    }
}

int findSubstring(char str[], char sub[]){
    int size_str1 = strlen(str);
    int size_str2 = strlen(sub);
    int retorno=0;
    int letras_iguais = 0;
    int k;

    for( int i=0 ; i < size_str1 ; i++){

        if(str[i] >=65 && str[i]<=122){

            if(str[i]<=90 || str[i] >=97){
                    
                k = i;
                for( int j=0 ; j<size_str2 ; j++){
                    if(str[k] != sub[j]){
                        letras_iguais = 0;
                        break;
                    } 
                    else if(str[k] == sub[j]){
                        letras_iguais++;
                        k++;
                        if(letras_iguais == size_str2){
                            retorno = 1;
                        }
                        
                    }   

                }
                
            }
     
        }
        
    }
    
    return retorno;
}

void cutString(char str[], char target[]){
    int size_str1 = strlen(str);
    int size_str2 = strlen(target);
    int retorno=0;
    int letras_iguais = 0;
    int k;
    int limite;

    for( int i=0 ; i < size_str1 ; i++){

        if(retorno == 1){
            str[i+size_str2] = 0;
        }
        if(str[i] >=65 && str[i]<=122){

            if(str[i]<=90 || str[i] >=97){
                    
                k = i;
                for( int j=0 ; j<size_str2 ; j++){
                    if(str[k] != target[j]){
                        letras_iguais = 0;
                        break;
                    } 
                    else if(str[k] == target[j]){
                        letras_iguais++;
                        k++;
                        if(letras_iguais == size_str2){
                            retorno = 1;
                        
                        }
                        
                    }   

                }
                
            }
     
        }
        
    }
    for ( int i=0 ; i<size_str1; i++){
        printf("%c", str[i]);
    }
}

void intToString(int number, char converted[]){
    int size_string_converted = strlen(converted);
    int size = number;
    int count=0;

    while(size >0 ){
        size/=10;
        count++;
    }
    printf("\nSaida: ");
    for(int i=0 ; i<count ; i++){
        converted[i] = number%10;
        number /= 10;
    }
    for(int i=count-1  ; i>=0 ; i--){
        printf(" %i", converted[i]);
    }


}

int stringToInt(char textNumber[]){
    int size = strlen(textNumber);
    int number;
    int potencia = 0;
    int number_two=0;


    for(int i=0 ; i<size ; i++){
        printf("%i", textNumber[i]);
        number = (int)textNumber[i] * (pow(10,potencia));
        number_two += number;
        potencia++;
    }
    return number_two;
}

int main(){

    /* Exercicio 01! */
   /* char str_exc1[] = "String_Exercicio_1!";

    printf("\nExercicio 01!\n");
    printString(str_exc1); */

    /* Exercicio 02! */
    /* char str_exc2[] = "String_exercicio2";

    printf("\n\nExercicio 02!\n");
    printStringReversed(str_exc2); */

    /* Exercicio 03! */
    /* char str_exc3[] = "String_exercicio3";
    printf("\n\nExercicio 03!\n");

    printStringSparse(str_exc3); */

    /* Exercicio 04! */
    /* char str_exc4 []= "String_exercicio4";
    char separador;

    printf("\n\nExercicio 04!");
    printf("\nDigite o caracter separador: ");
    scanf(" %c", &separador);

    printStringCustom(str_exc4, separador); */

    /* Exercicio 05! */
    /* char str_exc5[] = "String_Exercicio5";

    printf("\n\nExercicio 05!");
    stringReport(str_exc5); */

    /* Exercicio 06! */
    /* char str_exc6[] = "String_exercicio6";

    printf("\n\nExercicio 06!\n");

    stringToUpper(str_exc6); */

    /* Exercicio 07! */
    /* char str_exc7[] = "Primeira_String";
    char str_exc07[] = "Segunda_String";
    int compara = strcmpNoCase(str_exc7, str_exc07);

    if(compara == 0){
        printf("\nAs Strings sao iguais!!");
    }
    if(compara < 0){
        printf("\nA String S1 vem antes da S2!!");
    }
    if(compara > 0){
        printf("\nA String S2 vem antes S1!!!");
    } */

    /* Exercicio 08! */
    /* char str_exc8 [] = "String_Exercicio8";
    int numero_de_palavrs = countWords(str_exc8);

    printf("\nNumero de palavras da string: %i.", numero_de_palavrs); */

    /* Exercicio 09! */
    /* char str_exc9 [] = "first  things first, second  things latter teste ";
    int count_words = countWordsPlus(str_exc9);

    printf("\nNumero de palevras: %i.", count_words); */

    /* Exercicio 10! */
    /* char str_exc10[] = "welCOME To COMPUTER programming!!";

    stringCapitalize(str_exc10); */

    /* Exercicio 11! */
    /* char str_exc11[] = "Primeira_string";
    char str_exc_11[] = "Segunda_string";
    int resultado = stringCompare(str_exc11,str_exc_11);

    if(resultado == 0){
        printf("\nAs Strings sao iguais!!");
    }
    if(resultado > 0){
        printf("\nA segunda string vem antes da primeira!!");
    }
    if(resultado < 0){
        printf("\nA primeira string vem antes da segunda!!");
    } */

    /* Exercicio 12! */
    /* char str_exc12[] = "   hello world   ";
    stringTrim(str_exc12); */

    /* Exercicio 13! */
    /* char str_exc13[] = "first things first, second things latter";
    int check = findSubstring(str_exc13, "second");

    if( check == 1){
        printf("\nAs segunda string esta contida na primeira");
    }
    if( check == 0){
        printf("\nAs segunda string nao esta contida na primeira");
    } */ 

    /* Exercicio 14! */
    /* char string_exc14[] = "first things first, second things latter";
    cutString(s, "second"); */

    /* Exercicio 15! */
    /* char str_exc15[11];
    intToString(512, str_exc15); */

    /* Exercicio 16! */
    int str_exc16 = stringToInt("1024");

    printf("\nSaida: %i", str_exc16);


    return 0;
}