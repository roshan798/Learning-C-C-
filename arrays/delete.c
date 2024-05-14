#include <stdio.h>
// struct list {
//	int data;
//	struct list *ptr;
// };
void insert(int arr[])
{
	int i, size = sizeof(arr) / sizeof(int);
	for (i = 0; i <= size; i++)
		printf("%d  ", arr[i]);
}

int main()
{
	int arr[] = {1, 2, 45};
	insert(arr);
	return 0;
}
