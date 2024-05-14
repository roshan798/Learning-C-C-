#include <stdio.h>
#include <stdlib.h>
void Merge(int arr[], int l, int mid, int h)
{
	int i = l, j = mid + 1, k = l;
	int t[100];
	while (i <= mid && j <= h)
	{
		if (arr[i] < arr[j])
			t[k++] = arr[i++];
		else
			t[k++] = arr[j++];
	}
	while (i <= mid)
		t[k++] = arr[i++];
	while (j <= h)
		t[k++] = arr[j++];
	for (int i = l; i <= h; i++)
		arr[i] = t[i];
}

void MergeSort(int arr[], int l, int h)
{
	int mid = (h + l) / 2;
	if (l < h)
	{
		MergeSort(arr, l, mid);
		MergeSort(arr, mid + 1, h);
		Merge(arr, l, mid, h);
	}
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
	printf("Enetr array elements  : ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("\nBefore Sorting : ");
	Display(arr, n);

	//	Quicksort(arr,0,size);
	MergeSort(arr, 0, n - 1);
	printf("\nAfter Sorting  : ");
	Display(arr, n);
}
