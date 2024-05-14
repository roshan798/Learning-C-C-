#include <stdio.h>
int main()
{
    int mat1[10][10];
    int mat2[10][10];
    int i, j, k, row1, col1, row2, col2;

    printf("\n Enter the number of rows and columns \n For matrix A :");

    scanf("%d%d", &row1, &col1);

    printf("\n Enter the elementes \n ");

    for (i = 0; i < row1; i++)
    {

        for (j = 0; j < col1; j++)
            scanf("%d", &mat1[i][j]);
    }

    printf("\n Enter the number of rows and columns \n For matrix B : ");
    scanf("%d%d", &row2, &col2);
    int multiarr[row1][col2];
    if (col1 != row2)
    {
        printf("\n multiplication is not possible.");
        return;
    }
    else
    {
        printf("\n Enter the elements of matrix B : \n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
                scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row1; i++)
    {

        for (j = 0; j < col2; j++)
        {
            multiarr[i][j] = 0;
            for (k = 0; k < col1; k++)
                multiarr[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    printf("\n Matrix A * Matrix B  = \n\t ");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
            printf("%3d", multiarr[i][j]);
        printf("\n\t");
    }

    return 0;
}
