// matrix addition
#include <stdio.h>
void main()
{
	int matrix_A[3][3], matrix_B[3][3];
	int i, j;

	printf("Enter the elements of matrix A  :\n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{

			scanf("%d", &matrix_A[i][j]);
		}
	}
	printf("\nEnter the elements of matrix B :\n ");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &matrix_B[i][j]);
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", matrix_A[i][j] + matrix_B[i][j]);

		printf("\n");
	}
}
