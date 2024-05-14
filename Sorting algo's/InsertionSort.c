#include <stdio.h>
#include <stdlib.h>
// Insertion sort is stable and adptive algo and it's
//   worst case complexity = O(n^2)
//   best case complexity = O(n)
int *InsertionSort(int *a, int n)
{
	int i, j, x;
	for (i = 1; i < n; i++)
	{
		x = a[i];
		j = i - 1;
		while (j > -1 && a[j] > x)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = x;
	}
	return a;
}

void Display(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");
}
int main()
{
	int n;
	printf("Enter size of array : ");
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nArray before sorting : ");
	Display(arr, n);
	arr = InsertionSort(arr, n);
	printf("\nArray after sorting  : ");
	Display(arr, n);
}
