#include <stdio.h>
int fact(int);
int pas(int, int);
void main()
{
	int i, j, rows;
	printf("Enter number of rows of pascal's triangle : ");
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= rows - i; j++)
			printf(" ");
		for (j = 1; j <= (2 * i) - 1; j++)
			printf("%3d", pas(i, j));

		printf("\n");
	}
}
int fact(int n)
{
	if (n == 0)
		return 1;

	return n * fact(n - 1);
}
int pas(int n, int r)
{
	if (r == 1 || r == 0)
		return 1;
	return fact(n) / (fact(n - r) * fact(r));
}
