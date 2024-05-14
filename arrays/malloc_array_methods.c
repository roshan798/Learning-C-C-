#include <stdio.h> //malloc
#include <stdlib.h>

int i = 0;
struct array
{
	int array_size;
	int *ptr;
};

void create(struct array *p)
{
	printf("Enter the number of elements to be entered :");
	scanf("%d", &(p->array_size));
	p->ptr = (int *)malloc(p->array_size * sizeof(int));
}
void scan(struct array *p)
{

	printf("\nEnter elements of array :\n");
	for (i = 0; i < p->array_size; i++)
		scanf("%d", &(p->ptr)[i]);
}
void print(struct array *p)
{

	printf("\n Array Elements : \n");
	for (i = 0; i < p->array_size; i++)
		printf("%d  ", p->ptr[i]);
}

int search(struct array *p, int num)
{

	for (i = 0; i < p->array_size; i++)
	{
		if (p->ptr[i] == num)
			return i + 1;
	}
	return 0;
}
void create_new(struct array *p, int new_length)
{
	int *temp = NULL;
	temp = (int *)calloc(new_length, sizeof(int));

	for (i = 0; i < p->array_size; i++)
		temp[i] = (p->ptr)[i];
	free(p->ptr);
	p->ptr = temp;
	p->array_size = new_length;
}

void insert(struct array *p)
{
	int num, position;
	printf("\n Enter the number you want to insert : ");
	scanf("%d", &num);
	printf("\nEnter the index(0>index) : ", p->array_size);
	scanf("%d", &position);

	if (position > sizeof(p->array_size) + 2)
		create_new(p, position);
	else
		create_new(p, position + 1);

	for (i = p->array_size - 1; i >= position - 1; i--)
	{

		*((p->ptr) + i) = *((p->ptr) + (i - 1));
	}
	*((p->ptr) + (position - 1)) = num;
	print(p);
}

void delet(struct array *p)
{
	int dnum, index;
	printf("\nEnter the number you want to delete : ");
	scanf("%d", &dnum);
	index = search(p);
	if (index > 0)
	{
		for (i = index - 1; i < p->array_size; i++)
			*((p->ptr) + i) = *((p->ptr) + i + 1);
	}
}
int main()
{
	int num, index;
	struct array array1;

	create(&array1);

	scan(&array1);

	print(&array1);

	printf("\n\nEnter the number you want search :");
	scanf("%d", &num);
	index = search(&array1, num);
	if (index > 0)
		printf("\n Position/Index of array %d : %d", num, index);
	else
		printf("\n%d is not available in the array.", num);

	insert(&array1);

	delet(&array1);
	return 0;
}
