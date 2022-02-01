#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_matrix(int rows, int cols, int m[rows][cols])
{

    printf("\nMATRIZ EXERCICIO 1:\n\n");
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            printf("|%i| ", m[i][j]);
        }
        printf("\n");
    }
}

void print_reversed(int rows, int cols, int m[rows][cols])
{

    printf("\nMATRIZ EXERCICIO 2!\n");

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            printf("|%i| ", m[i][j]);
        }
        printf("\n");
    }
}

void print_min_max(int rows, int cols, int m[rows][cols])
{
    int menor = 99999999;
    int maior = -9999999;
    int compara;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            compara = m[i][j];
            if (compara < menor)
            {
                menor = compara;
            }
            if (compara > maior)
            {
                maior = compara;
            }
        }
    }

    printf("\nMaior Numero: %i.", maior);
    printf("\nMenor Numero: %i.", menor);
}

float average(int rows, int cols, int m[rows][cols])
{

    int soma = 0;
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            soma += m[i][j];
            count++;
        }
    }

    return (soma / count);
}

void init_values(int rows, int cols, int m[rows][cols], int start, int step)
{

    printf("\n|Matriz De Inteiros|\n");
    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = start;
            printf(" %i |", m[i][j]);
            start += step;
        }
        printf("\n");
    }
}

void init_random(int rows, int cols, int m[rows][cols], int min, int max)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m[i][j] = min + rand() % max;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            printf(" %2i |", m[i][j]);
        }
        printf("\n");
    }
}

int max_line(int rows, int cols, int m[rows][cols])
{
    int soma = 0;
    int maior = -9999999;
    int rows_number;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            soma += m[i][j];
        }
        if (soma > maior)
        {
            maior = soma;
            rows_number = i;
        }
        soma = 0;
    }

    return rows_number;
}

void put_totals(int rows, int cols, int m[rows][cols])
{
    int soma = 0;
    int maior = -9999999;
    int rows_number;

    printf("\n\tMatriz\n");

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < cols; j++)
        {
            if (j < cols - 1)
            {
                soma += m[i][j];
            }
            if (j == cols - 1)
            {
                m[i][j] = soma;
            }
        }
        soma = 0;
    }
    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {

            printf(" %2i |", m[i][j]);
        }
        printf("\n");
    }
}

int matrix_equals(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    int compara = 0;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (m1[i][j] == m2[i][j])
            {
                compara = 1;
            }
            else
            {
                compara = 0;
                break;
            }
        }
    }

    return compara;
}

void sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int m3[rows][cols])
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %i ", m3[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            m2[j][i] = m1[i][j];
        }
        printf("\n");
    }
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf(" %2i ", m2[i][j]);
        }
        printf("\n");
    }
}

void switch_diagonals(int d, int m1[d][d])
{
    int a = 0;
    int b = 0;
    int diagonal_main[3];
    int second_diagonal[3];
    int ultima_coluna = 2;

    printf("\nMatrriz com Diagonais invertidas\n\n");
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (j == i)
            {
                diagonal_main[a] = m1[i][j];
                a++;
            }
            if (j == ultima_coluna)
            {

                second_diagonal[b] = m1[i][j];
                ultima_coluna--;
                b++;
            }
        }
    }

    a = 0;
    b = 0;
    ultima_coluna = d - 1;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (j == i)
            {
                printf(" %i ", second_diagonal[b]);
                b++;
            }
            else if (j == ultima_coluna)
            {
                printf(" %i ", diagonal_main[a]);
                ultima_coluna--;
                a++;
            }
            else
            {
                printf(" %i ", m1[i][j]);
            }
            if (j == ultima_coluna && i == ultima_coluna)
            {
                ultima_coluna--;
                a++;
            }
        }
        printf("\n");
    }
}

void pascal_triangle(int n)
{
    int m[n][n + 1];

    printf("\n| Triangulo de Pascal |\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {

            if (j == 1 && i == 0)
            {
                m[i][j] = 1;
            }
            else
            {
                m[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {

            m[i + 1][j + 1] = m[i][j] + m[i][j + 1];
            printf(" %2i ", m[i][j]);
        }

        printf("\n");
    }
}

int check_upper_triangle(int d, int m[d][d])
{
    int compara = 0;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (j < i)
            {
                if (m[i][j] == 0)
                {
                    compara = 1;
                }
                else
                {
                    compara = 0;
                    break;
                }
            }
        }
    }

    return compara;
}

int check_identity(int rows, int cols, int m[rows][cols])
{
    int matriz_identidade[rows][cols];
    int check;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == i)
            {
                matriz_identidade[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matriz_identidade[i][j] == m[i][j])
            {
                check = 1;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }

    return check;
}

int check_symmetric(int d, int m[d][d])
{
    int m2[d][d];
    int result;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            m2[i][j] = 0;
        }
        printf("\n");
    }

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            m2[j][i] = m[i][j];
        }
    }
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (m2[i][j] == m[i][j])
            {
                result = 1;
            }
            else
            {
                result = 0;
                break;
            }
        }
    }
    return result;
}

int main()
{
    /* Exercicio 01! */
    int mat_exc1[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    printf("\nExercicio 01!\n");
    print_matrix(3, 3, mat_exc1);
    printf("\n\n");

    /* Exercicio 02! */
    int mat_exc2[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    printf("\nExercicio 02!\n");
    print_reversed(3, 3, mat_exc2);
    printf("\n\n");

    /* Exercicio 03! */
    int str_exc3[4][4] = {{1, 2, 3, 4},
                          {6, 7, 8, 9},
                          {4, 3, 2, 1},
                          {9, 8, 7, 6}};

    printf("\nExercicio 03!\n");

    print_min_max(4, 4, str_exc3);
    printf("\n\n");

    /* Exercicio 04! */
    int str_exc4[3][3] = {{1, 2, 3},
                          {1, 2, 3},
                          {1, 2, 3}};

    float media = average(3, 3, str_exc4);

    printf("\nExercicio 04!");
    printf("\nMedia: %.2f", media);
    printf("\n\n");

    /* Exercicio 05! */
    int str_exc5[4][6];

    printf("\nExercicio 05!");
    init_values(4, 6, str_exc5, 10, 2);

    printf("\n\n");

    /* Exercicio 06! */
    int str_exc6[4][6];

    printf("\nExercicio 06!\n");
    printf("\nMatriz Exercicio 06\n");
    init_random(4, 6, str_exc6, 5, 50);
    printf("\n\n");

    /* Exercicio 07! */
    int mat[5][5] = {{1, 2, 3, 4, 5},
                     {2, 4, 6, 8, 10},
                     {1, 2, 3, 4, 7},
                     {2, 0, 6, 1, 10}};

    int res = max_line(5, 5, mat);

    printf("\nExercicio 07!\n");
    printf("Maior soma: %d\n", res);
    printf("\n\n");

    /* Exercicio 08! */
    int mat_exc08[4][5] = {{1, 2, 3, 4, 0},
                           {2, 4, 6, 8, 0},
                           {3, 6, 9, 12, 0},
                           {4, 8, 12, 16, 0}};

    printf("\nExercicio 08!\n");
    put_totals(4, 5, mat_exc08);
    printf("\n\n");

    /* Exercicio 09! */
    int vetor_exc9[4][4] = {{1, 2, 3, 4},
                            {1, 2, 3, 4},
                            {1, 2, 3, 4},
                            {1, 2, 3, 4}};

    int vetor_exc09[4][4] = {{1, 2, 3, 4},
                             {1, 2, 3, 4},
                             {1, 2, 3, 4},
                             {1, 2, 3, 4}};

    int result = matrix_equals(4, 4, vetor_exc9, 4, 4, vetor_exc09);

    printf("\nExercicio 09!\n");

    if (result == 0)
    {
        printf("\nMatrizes nao sao iguais!\n");
    }
    if (result == 1)
    {
        printf("\nMatrizes sao iguais!\n");
    }
    printf("\n\n");

    /* Exercicio 10! */
    int matriz1_exercio10[3][3] = {{1, 2, 3},
                                   {1, 2, 3},
                                   {1, 2, 3}};

    int matriz2_exercio10[3][3] = {{1, 2, 3},
                                   {1, 2, 3},
                                   {1, 2, 3}};

    int matriz3_exercicio10[3][3];

    printf("\nExercicio 10!\n");
    sum(3, 3, matriz1_exercio10, matriz2_exercio10, matriz3_exercicio10);
    printf("\n\n");

    /* Exercicio 11! */
    int matriz_exercicio11[2][3] = {{1, 2, 3}, {0, -6, 7}};
    int matriz2_exercicio11[3][2];

    printf("\nExercicio 11!\n");
    transpose(2, 3, matriz_exercicio11, 3, 2, matriz2_exercicio11);
    printf("\n\n");

    /* Exercicio 12! */
    int matriz_exercicio12[3][3] = {{1, 2, 3},
                                    {4, 5, 6},
                                    {7, 8, 9}};

    printf("\nexercicio 12!\n");
    switch_diagonals(3, matriz_exercicio12);
    printf("\n\n");

    /* Exercicio 13! */
    int rows;

    printf("\nExercicio 13!\n");
    printf("\nDigite o Numero de Linhas do triangulo: ");
    scanf("%i", &rows);
    pascal_triangle(rows);
    printf("\n\n");

    /* Exercicio 14! */
    int matriz_exc14[3][3] = {{1, 2, 3},
                              {0, 5, 6},
                              {0, 0, 9}};

    int result_exc14 = check_upper_triangle(3, matriz_exc14);

    printf("\nExercicio 14!\n");
    if (result_exc14 == 1)
    {
        printf("\nMatriz eh Triangular Inferior!!");
    }
    if (result_exc14 == 0)
    {
        printf("\nMatriz nao eh Triangular Inferior!!");
    }
    printf("\n\n");

    /* Exercicio 15! */
    int matriz_exc15[3][3] = {{1, 0, 0},
                              {0, 1, 0},
                              {0, 0, 1}};

    int check = check_identity(3, 3, matriz_exc15);
    printf("\nExercicio 15!\n");
    if (check == 0)
    {
        printf("\nA matriz nao eh identidade!\n");
    }
    if (check == 1)
    {
        printf("\nA matriz eh identidade!\n");
    }

    printf("\n\n");

    /* Exercicio 16! */
    int matriz_exc16[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 8},
    };

    int result_exc16 = check_symmetric(3, matriz_exc16);

    printf("\nExercicio 16!\n");

    if (result_exc16 == 0)
    {
        printf("\nA matriz nao eh identidade!\n");
    }
    if (result_exc16 == 1)
    {
        printf("\nA matriz eh identidade!\n");
    }

    printf("\n\n");

    return 0;
}