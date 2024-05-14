#include <stdio.h>
long factorial(int);
long comb(int, int);

main()
{
    int i, j, k;
    printf("Enter number of rows");
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%5ld", comb(i, j));

        printf("\n");
    }
    long comb(int n, int r)
    {
        long c;
        c = factorial(n) / (factorial(r) * factorial(n - r));
        return c;
    }
    long factorial(int k)
    {
        long fact = 1;
        while (k > 0)
        {
            fact *= k;
            k--;
        }
        return fact;
    }
}
