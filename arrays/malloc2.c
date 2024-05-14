#include <stdio.h>
#include <stdlib.h>
int main()
{
	int **p, i, j;
	p = (int **)malloc(2 * sizeof(int *));
	printf("~%d~%d", p, sizeof(p));
	for (i = 0; i < 2; i++)
		p[i] = (int *)malloc(3 * sizeof(int));
	printf("h~%d~%d", **(p + 0), **(p + 1));
	printf("\n Enter elements of matrix (2*3)\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", *((p + i) + j));
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", *((p + j) + i));
	}
	return 0;
}
