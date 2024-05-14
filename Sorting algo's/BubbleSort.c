#include <stdio.h>
#include <stdlib.h>
// Bubble sort is stable and adptive algo and it's
//   worst case complexity = O(n^2)
//   best case complexity = O(n)
int *BubbleSort(int *a, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
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
	arr = BubbleSort(arr, n);
	printf("\nArray after sorting  : ");
	Display(arr, n);
}
