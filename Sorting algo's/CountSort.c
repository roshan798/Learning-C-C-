#include <stdio.h>
#include <stdlib.h>
void Display(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");
}
int FindMax(int a[], int n)
{
	int max = INT_MIN;
	for (int i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];

	return max;
}
void CountSort(int arr[], int n)
{
	int max = FindMax(arr, n);
	int *tmp = (int *)calloc((max + 1), sizeof(int));
	for (int i = 0; i < n; i++)
		tmp[arr[i]]++;
	int i = 0, j = 0;
	while (i <= max)
	{
		if (tmp[i] > 0)
		{
			arr[j++] = i;
			--tmp[i];
		}
		else
			i++;
	}
}
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	printf("Enetr array elements  : ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nBefore Sorting : ");
	Display(arr, n);

	CountSort(arr, n);
	printf("\nAfter Sorting  : ");
	Display(arr, n);
}
