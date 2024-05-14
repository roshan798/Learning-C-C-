#include <stdio.h>
#include <stdlib.h>
// both has no difference
void display(int a[], int n);
void MergeSort(int arr[], int l, int h);
void Merge(int arr[], int l, int mid, int h);
int main()
{
	printf("Enter the size of array  : ");
	int n;
	scanf("%d", &n);
	int *arr = (int *)malloc(n * sizeof(int));
	printf("Enter %d Elements of array : ", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("Array Before Sorting : ");
	display(arr, n);
	MergeSort(arr, 0, n - 1);
	printf("\nArray After Sorting : ");
	display(arr, n);
}

void MergeSort(int a[], int l, int h)
{
	int mid = (l + h) / 2;
	if (l < h)
	{
		MergeSort(a, l, mid);
		MergeSort(a, mid + 1, h);
		Merge(a, l, mid, h);
	}
}

void Merge(int a[], int l, int mid, int h)
{
	int i = l, j = mid + 1;
	int t[100];
	int k = l;
	while (i <= mid && j <= h)
	{
		if (a[i] <= a[j])
			t[k++] = a[i++];
		else
			t[k++] = a[j++];
	}
	while (i <= mid)
		t[k++] = a[i++];
	while (j <= h)
		t[k++] = a[j++];

	for (int i = l; i <= h; i++)
		a[i] = t[i];
}

void display(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d  ", a[i]);
}
