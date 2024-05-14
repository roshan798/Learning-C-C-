#include <stdio.h>
#include <limits.h>

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

void Swap(int *a, int *b)
{
	//	static int x=0;
	int temp = *a;
	*a = *b;
	*b = temp;
	//	printf("%d\n",++x);
}

int Partition(int arr[], int l, int h)
{
	int pivot = arr[l];
	int i = l, j = h;

	do
	{
		do
		{
			++i;
		} while (arr[i] <= pivot);
		do
		{
			--j;
		} while (arr[j] > pivot);
		if (i < j)
			Swap(&arr[i], &arr[j]);
	} while (i < j);

	Swap(&arr[l], &arr[j]);
	return j;
}
void Quicksort(int arr[], int l, int h)
{
	int j;

	if (l < h)
	{
		j = Partition(arr, l, h);
		Quicksort(arr, l, j);
		Quicksort(arr, j + 1, h);
	}
}
int main()
{
	int size = 18;
	int arr[] = {6, 1, 4, 2, 2, 1, 0, 8, 5, 132, 324, 2, 1, 23, 11, 7, 6, 2};

	printf("\nBefore Sorting : ");
	Display(arr, size);

	//	Quicksort(arr,0,size);
	MergeSort(arr, 0, size - 1);
	printf("\nAfter Sorting  : ");
	Display(arr, size);
}
