#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows:\n ");

    rows=5;
    for(i=1;i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
