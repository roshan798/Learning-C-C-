#include <stdio.h>
int i, j; // matrix addition

void inputarr(int arr1[3][3], char ch)
{

	printf("Enter the elements of %c matrix of size 3*3  \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
		printf("\n");
	}
}
void printarr(int arr[3][3], char ch)
{
	printf("matrix %c : \n", ch);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%2d", arr[i][j]);

		printf("\n");
	}
}
int add(int array1[3][3], int array2[3][3], int a, int b)
{
	return array1[a][b] + array2[a][b];
}
void main()
{
	int sum;
	int matrix1[3][3], matrix2[3][3];
	inputarr(matrix1, 'A');
	inputarr(matrix2, 'B');
	printarr(matrix1, 'A');
	printarr(matrix2, 'B');
	printf("SUM = \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = add(matrix1, matrix2, i, j);
			printf("%3d", sum);
		}
		printf("\n");
	}
}
