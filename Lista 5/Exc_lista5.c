#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EXERCICIO 01! */
int is_prime(int n)
{
    int conta_divisao = 0;
    int returna_resultado;

    if (n < 0)
    {
        n = n * (-1);
    }

    for (int i = 1; i <= n; i++)
    {

        if (n % i == 0)
        {

            conta_divisao++;
        }
    }
    if (conta_divisao == 2)
    {

        returna_resultado = 1;
    }
    if (conta_divisao != 2)
    {

        returna_resultado = 0;
    }

    return returna_resultado;
}

/* EXERCICIO 02! */
void print_randon(int n, int max)
{

    int rand();

    for (int i = 0; i < n; i++)
    {

        printf("Numero aleatorio:  %i.\n", (0 + rand() % max));
    }
}

/* EXERCICIO 03! */
void print_random2(int n, int min, int max)
{

    for (int i = 0; i < n; i++)
    {

        printf("Numero aleatorio:  %i.\n", (min + rand() % (max - min)));
    }
}

/* EXERCICIO 04! */
int is_perfect_number(int n)
{

    int soma_numeros = 0;
    int retorno;
    for (int i = 1; i < n; i++)
    {

        if (n % i == 0)
        {

            soma_numeros += i;
        }
    }

    if (soma_numeros == n)
    {
        retorno = 1;
    }
    else if (soma_numeros != n)
    {
        retorno = 0;
    }

    return retorno;
}

/* EXERCICIO 05! */
void number_in_full_100(int n)
{

    int recebe_unidade;
    int recebe_dezena;
    int recebe_caso_negativo = 0;

    if (n == 10)
    {
        printf("Dez");
    }
    if (n == -10)
    {
        printf("Dez negativo");
    }
    if (n > -100 && n < 100)
    {

        if (n == 0)
        {
            printf("Zero");
        }

        while (n != 0)
        {
            if (n < 0)
            {
                recebe_caso_negativo++;
                n *= (-1);
            }

            if ((n > -10 && n < 10) && (n != 0))
            {

                switch (n)
                {
                case 1:
                    printf("Um");
                    break;

                case 2:
                    printf("Dois");
                    break;

                case 3:
                    printf("Tres");
                    break;

                case 4:
                    printf("Quatro");
                    break;

                case 5:
                    printf("Cinco");
                    break;

                case 6:
                    printf("Seis");
                    break;

                case 7:
                    printf("Sete");
                    break;

                case 8:
                    printf("Oito");
                    break;

                case 9:
                    printf("Nove");
                    break;

                default:
                    break;
                }
                n = n / 10;
            }

            recebe_unidade = (n % 10);
            n = (n / 10);
            recebe_dezena = (n % 10);
            n /= 10;

            switch (recebe_unidade)
            {
            case 1:
                if (recebe_unidade == 1)
                {
                    printf("Onze.");
                }
                if (recebe_unidade == 2)
                {
                    printf("Doze.");
                }
                if (recebe_unidade == 3)
                {
                    printf("Treze.");
                }
                if (recebe_unidade == 4)
                {
                    printf("Quatorze.");
                }
                if (recebe_unidade == 5)
                {
                    printf("Quinze.");
                }
                if (recebe_unidade == 6)
                {
                    printf("Dezeseis.");
                }
                if (recebe_unidade == 7)
                {
                    printf("Dezesete.");
                }
                if (recebe_unidade == 8)
                {
                    printf("Dezoito.");
                }
                if (recebe_unidade == 9)
                {
                    printf("Dezenove.");
                }
                break;

            case 2:
                printf("Vinte");
                break;

            case 3:
                printf("trinta");
                break;

            case 4:
                printf("quarenta");
                break;

            case 5:
                printf("Cinquenta");
                break;

            case 6:
                printf("Sessenta");
                break;

            case 7:
                printf("Setenta");
                break;

            case 8:
                printf("Oitenta");
                break;

            case 9:
                printf("Noventa");
                break;

            default:
                break;
            }

            if (recebe_dezena > 1)
            {
                switch (recebe_dezena)
                {
                case 1:
                    printf(" e um");
                    break;

                case 2:
                    printf(" e dois");
                    break;

                case 3:
                    printf(" e tres");
                    break;

                case 4:
                    printf(" e quatro");
                    break;

                case 5:
                    printf(" e cinco");
                    break;

                case 6:
                    printf(" e seis");
                    break;

                case 7:
                    printf(" e sete");
                    break;

                case 8:
                    printf(" e oito");
                    break;

                case 9:
                    printf(" e nove");
                    break;

                default:
                    break;
                }
            }
        }
    }

    if (n == 100)
    {
        printf("Cem");
    }
    if (n == -100)
    {
        printf("Cem negativo");
    }

    if (recebe_caso_negativo != 0)
    {
        printf(" negativo.");
    }
    printf(" !!");

    printf("\n\n");
}

/* EXERCICIO 06! */
int factorial_sum(int n)
{

    int fatorial = 1;
    int soma_fatorial = 0;

    for (int i = 1; i <= n; i++)
    {

        fatorial *= i;
        soma_fatorial += fatorial;
    }

    return soma_fatorial;
}

/* EXERCICIO 07! */
void print_vector(int n, int vet[n])
{
    printf("\nSaida: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", vet[i]);
    }
}

/* EXERCICIO 08! */
void print_vector_plus(int n, int vet[n])
{
    printf("\nSaida: ");
    printf("[");
    for (int i = 0; i < n; i++)
    {
        printf(" %i", vet[i]);
        if (i < n - 1)
        {
            printf(",");
        }
    }
    printf("]");
}

/* EXERCICIO 09! */
void print_even(int n, int vet[n])
{

    printf("\nSaida: ");
    for (int i = 0; i < n; i++)
    {

        if (i != 0 && i % 2 == 0)
        {
            printf("%i ", vet[i]);
        }
    }
}

/* EXERCICIO 10! */
float vector_avg(int n, int vet[n])
{
    int soma = 0;
    int count = 0;
    float media;

    for (int i = 0; i < n; i++)
    {
        soma += vet[i];
        count++;
    }

    media = (soma / count);
    return media;
}

/* EXERCICIO 11! */
int find(int n, int vet[n], int elem)
{
    int retorno = -1;
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            retorno = i;
        }
    }

    return retorno;
}

/* EXERCICIO 12! */
void find_min_max(int n, int vet[n])
{

    int maior = -9999999;
    int menor = 99999999;

    for (int i = 0; i < n; i++)
    {

        if (vet[i] > maior)
        {
            maior = vet[i];
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }

    printf("\nMaior valor: %i.", maior);
    printf("\nMenor Valor: %i.", menor);
}

/* EXERCICIO 13! */
void replace_all(int n, int vet[n], int elem)
{

    for (int i = 0; i < n; i++)
    {
        if (vet[i] == elem)
        {
            if (vet[i] < 0)
            {
                elem *= (-1);
            }
        }
    }
    printf("\nValor do Elemento: %i", elem);
}

/* EXERCICIO 14! */
void make_power_of_two(int n, int vet[n])
{

    printf("\nSaida: ");
    for (int i = 0; i < n; i++)
    {
        vet[i] = pow(2, i);
        printf("%i ", vet[i]);
    }

    printf("\n!! ");
}

/* EXERCICIO 15! */
int is_sorted(int n, int vet[n])
{

    int numero;
    int numero_seguinte;
    int resultado;

    for (int i = 0; i < n - 1; i++)
    {
        numero = vet[i];
        numero_seguinte = vet[i + 1];

        if (numero > numero_seguinte)
        {
            resultado = 0;
        }
        else if (numero_seguinte > numero)
        {
            resultado = 1;
        }
    }

    return resultado;
}

/* EXERCICIO 16! */
void reverse(int n, int vet[n])
{
    printf("\nSaida: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%i ", vet[i]);
    }
}

/* EXERCICIO 17! */
void defrag(int n, int vet[n])
{

    int conta_vazios = 0;
    printf("\nSaida: ");

    for (int i = 0; i < n; i++)
    {
        if (vet[i] != -1)
        {
            printf(" %i,", vet[i]);
        }
        else
        {
            conta_vazios++;
        }
    }
    for (int i = 0; i < conta_vazios; i++)
    {
        printf("%i ", -1);
        if (i < conta_vazios - 1)
        {
            printf(",");
        }
    }
}

int main()
{
    /* Exercicio 01! */
    /* int n;
    int primo;

    printf("\nExercicio 01!\n ");
    printf("\nInforme o Numero N: ");
    scanf("%i", &n);

    is_prime(n);
    primo = is_prime(n);

    if( primo == 1){
        printf("\nO Numero digitado eh primo!!\n");
    }
    if( primo == 0){
        printf("\nO Numero digitado nao eh primo!!\n");
    }
    printf("\n\n"); */

    /* Exercicio 02! */
    /* int qntd_num_imprimidos;
    int max; 

    printf("\nExercicio 02!\n ");
    
    printf("\nInforme a Quantidade de Numeros a serem impressos: ");
    scanf("%i", &qntd_num_imprimidos);

    printf("\nInforme o maior numero a ser sorteado: ");
    scanf("%i", &max);

    print_randon(qntd_num_imprimidos , max);
    printf("\n\n"); */

    /* Exercicio 03! */
    /*  int n3;
    int min;
    int max3;
    
    printf("\nExercicio 03!\n ");

    printf("\nInforme a Quantidade de Numeros a serem impressos: ");
    scanf("%i", &n3);

    printf("\nInforme o menor numero a ser sorteado: ");
    scanf("%i", &min);

    printf("\nInforme o maior numero a ser sorteado: ");
    scanf("%i", &max3);

    print_random2(n3,min,max3);
    printf("\n\n"); */

    /* Exercicio 04! */
    /* int n4;
    int recebe_exc4;
    printf("\nExercicio 04!\n ");

    printf("\nInforme o valor de n: ");
    scanf("%i", &n4);

    is_perfect_number(n4);
    recebe_exc4 = is_perfect_number(n4);

    if(recebe_exc4 == 1){
        printf("\nO Numero eh perfeito!! ");
    }
    else if(recebe_exc4 == 0){
        printf("\nO Numero nao eh perfeito!! ");
    }
    printf("\n\n"); */

    /* Exercicio 05! */
    /* int n5;
    printf("\nExercicio 05!\n ");

    printf("\nInforme o Valor de N: ");
    scanf("%i", &n5);

    number_in_full_100(n5);
    printf("\n\n");
 */

    /* Exercicio 06! */
    /*  int n6;
    int resultado_exc06;
    printf("\nExercicio 06!\n ");

    printf("\nInforme o valor de N: ");
    scanf("%i", &n6);

    factorial_sum(n6);
    resultado_exc06 = factorial_sum(n6);
    printf("\nSoma dos Fatoriais: %i.\n\n", resultado_exc06);
    printf("\n\n"); */

    /* Exercicio 07! */
    /* int v[] = {2,6,3,2,0,9};
    printf("\nExercicio 07!\n ");


    print_vector(6, v);
    printf("\n\n"); */

    /* Exercicio 08! */
    /* int v8[] = {2,6,3,2,0,9};
    printf("\nExercicio 08!\n ");

    print_vector_plus(6, v8);
    printf("\n\n"); */

    /* Exercicio 09! */
    /*  printf("\nExercicio 09!\n ");

    int v9[] = {2, 6, 3, 2, 0, 9, 25, 32, -4};
    print_even(9, v9);
    printf("\n\n"); */

    /* Exercicio 10! */
    /* printf("\nExercicio 10!\n ");
    int v10[] = {1, 23, 4, 8, 38, 7, 3};
    float res = vector_avg(7, v10);

    printf(" Media: %.2f\n ", res);
    printf("\n\n"); */

    /* Exercicio 11! */ /* revisar */
    /* int v11[] = {55,-6,100,-88,0};
    int elem;
    int recebe_resultado;
    printf("\nExercicio 11!\n ");

    printf("\nInforme o elemento a ser procurado: ");
    scanf("%i", &elem);

    recebe_resultado = find(5, v11, elem);

    if( recebe_resultado == -1){
        printf("\nElemento nao encontrado!!");
    }
    else{
        printf("\no Elemeto esta na posicao: %i", recebe_resultado);
    }
    printf("\n\n"); */

    /* Exercicio 12! */
    /* int v12[] = {2, -3, 100, -5, 0};
    printf("\nExercicio 12!\n ");

    find_min_max(5, v12);
    printf("\n\n") */;

    /* Exercicio 13! */
    /* int elem13;
    int vet[] = {-55, -10, 0 , 5, 8};
    printf("\nExercicio 13!\n ");

    printf("\nInforme o valor a ser procurado: ");
    scanf("%i", &elem13);

    replace_all(5, vet, elem13);
    printf("\n\n"); */

    /* Exercicio 14! */
    /* int vet14[10];
    printf("\nExercicio 14!\n ");

    make_power_of_two( 10, vet14);
    printf("\n\n"); */

    /* Exercicio 15 */
    /* int v15[] = {1,4,7,9,15,22,48,512};
    int res15 = is_sorted(8, v15);
    printf("\nExercicio 15!\n ");

    printf("\nSe resultado (1)Estao na sequencia (0)Nao estao");
    printf("\nResultado: %i.", res15);
    printf("\n\n"); */

    /* Exercicio 16! */
    /* int v16[] = {1,4,6,7,3}; 
    printf("\nExercicio 16!\n ");

    reverse(5, v16);
    printf("\n\n"); */

    /* Exercicio 17! */
    /* printf("\nExercicio 17!\n ");

    int v17[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1};
    defrag(9, v17);
    printf("\n\n"); */

    return 0;
}