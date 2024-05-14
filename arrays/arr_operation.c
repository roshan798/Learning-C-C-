#include <stdio.h>
#include <stdlib.h>

struct array
{
	int size, used_size;
	int *ptr;
};

void create(struct array *a)
{
	a->ptr = (int *)malloc((a->size) * sizeof(int));

	for (int i = 0; i < a->used_size; i++)
	{
		printf("\nEnter arr[%d] : ", i);
		scanf("%d", &a->ptr[i]);
	}
}

void display(struct array a)
{
	for (int i = 0; i < a.used_size; i++)
		printf("%d  ", a.ptr[i]);

	printf("\n");
}
void insertion(struct array *a, int num, int index)
{
	if (index > a->size - 1)
	{
		printf("\narray is full");
		return;
	}
	else if (index < a->used_size - 1)
	{
		for (int i = a->used_size; i > index; i--)
		{
			a->ptr[i] = a->ptr[i - 1];
		}
		a->ptr[index] = num;
		a->used_size++;
	}
	else
		a->ptr[a->used_size++] = num;
}

int deletion(struct array *a, int index)
{
	int num;
	if (index > a->used_size - 1)
		return -1;
	else
	{
		num = a->ptr[index];
		for (int i = index; i < a->used_size; i++)
			a->ptr[i] = a->ptr[i + 1];
		a->used_size--;
	}
	return num;
}
int search(struct array a, int num)
{
	for (int i = 0; i < a.used_size; i++)
	{
		if (a.ptr[i] == num)
			return i;
	}
	return -1;
}

int main()
{
	int index, num;
	struct array arr1;
	printf("Enter array size : ");
	scanf("%d", &arr1.size);
	printf("\nEnter the number of element you want to enter : ");
	scanf("%d", &arr1.used_size);

	create(&arr1);
	printf("\nArray elements are : ");
	display(arr1);

	printf("\nEnter the index where you want to insert : ");
	scanf("%d", &index);
	printf("Enter the number you want to insert : ");
	scanf("%d", &num);
	insertion(&arr1, num, index);
	printf("\nAfter insertion arrayn : ");
	display(arr1);

	printf("\nEnter the index of the number to be deleted : ");
	scanf("%d", &index);
	num = deletion(&arr1, index);
	if (num == -1)
		printf("invalid index number\n");
	else
		printf("deleted number : %d ", num);

	printf("\narray after deletion : ");
	display(arr1);
	printf("\nEnter the number you want to search : ");
	scanf("%d", &num);
	index = search(arr1, num);
	if (index == -1)
		printf("number is not in array\n");
	else
		printf("number is at index  : %d ", index);

	return 0;
}
