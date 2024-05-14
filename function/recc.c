#include <stdio.h>

int fat(int);
int pascal(int, int);

main()
{
	printf("Enter the rows number for pascal's triangle : ");
	int k, i, j, rows;
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows - i; j++)
			printf(" ");

		for (k = 1; k <= i; k++)
		{
			printf("%2d", pascal(i, k));
		}
		printf("\n");
	}
}
int fact(int n)
{
	if (n == 0)
		return 1;

	return (n * fact(n - 1));
}
int pascal(int n, int r)

{
	if (r == 1 || r == n)
		return 1;
	int result;
	result = fact(n) / (fact(r) * fact(n - r));
	// 	printf("%d",fact(n));
	return result;
}
