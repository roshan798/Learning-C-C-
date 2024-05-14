#include <stdio.h>
long fact(int n, int r)
{
	if (r == 1 || r == 0)
		return 1;

	return n * fact(n - 1, r) / (n - r) * fact(n - r, r)
}
void main()
{
	printf("Enter number of rows for pascel's triangle : ");
	int i, j, rows;
	long int res;
	scanf("%d", &rows);

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			res = fact(i, j);
			printf(" %d ", res);
		}
		printf("\n");
	}
}
