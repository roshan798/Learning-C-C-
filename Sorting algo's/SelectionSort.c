#include <stdio.h>
#include <stdlib.h>
// Insertion sort is not stable and not an adptive algo and it's
//   worst case complexity = O(n^2)
//   best case complexity = O(n^2)
void Swap(int *a, int *b)
{
	int temp = (*a);
	*a = (*b);
	*b = temp;
}
int *SelectionSort(int *a, int n)
{
	int i, j, k;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[k] > a[j])
				k = j;
		}
		Swap(&a[i], &a[k]);
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
	arr = SelectionSort(arr, n);
	printf("\nArray after sorting  : ");
	Display(arr, n);
}
