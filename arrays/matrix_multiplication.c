// matix multiplication
#include <stdio.h>
void main()
{
	int A[2][2], B[2][2], i, j;

	printf(" Enter the elements of 1st matrix \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			scanf("%d", &A[i][j]);
	}
	printf("Elements of matrix A\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf(" %d", A[i][j]);

		printf("\n");
	}
	printf(" Enter the elements of 2nd matrix \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			scanf("%d", &B[i][j]);
	}
	printf("Elements of matrix B\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			printf(" %d", B[i][j]);

		printf("\n");
	}
}
