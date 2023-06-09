#include <stdio.h>
#include <stdlib.h>

typedef struct tablica{
    int row;
    int col;
    float **tab;
} tablica;

void matrix_multiplication(tablica tab, float x)
{
    for (int i = 0; i < tab.row; i++)
    {
        for (int j = 0; j < tab.col; j++)
        {
           tab.tab[i][j] *= x; // tab[i] = tab[i] * x
        }
    }
}

void print_matrix(tablica x)
{

    for (int i = 0; i < x.row; i++)
    {
        for (int j = 0; j < x.col; j++)
        {
            printf("%f\t", x.tab[i][j]);
        }
        printf("\n");
    }
}

tablica createMatrix(int row, int col){
    tablica x;
    x.col = col;
    x.row = row;
    float **tab3;
    tab3 = calloc(4, sizeof(float *));
    for (int i = 0; i < 4; i++)
    {
        tab3[i] = calloc(2, sizeof(float));
    }
    x.tab = tab3;
    return x;
}

int main(int argc, char const *argv[])
{
    tablica asd = createMatrix(4,2);

    for (int i = 0; i < asd.row; i++)
    {
        for (int j = 0; j < asd.col; j++)
        {
            printf("podaj wartosc tab[%d][%d]", i, j);
            float val;
            scanf("%f", &val);
            asd.tab[i][j] = val;
        }
    }

    print_matrix(asd);

    matrix_multiplication(asd, 4);

    print_matrix(asd);

    return 0;
}