#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int i, j, *temp_ptr;
	int *ptr;
	int arr[] = {34, 56, 86};
	printf("Enter the number of elements  to be enrtered %d__:", ptr);
	//	scanf("%d",&num);
	ptr = (int *)malloc(3 * sizeof(int));
	if (ptr == NULL)
		printf("Memory is not allocated");
	else
	{
		printf("%d", sizeof(*ptr));
		for (i = 0; i < 3; i++)
			ptr[i] = arr[i];
	}
	for (i = 0; i < 3; i++)
		printf("%d\t ", ptr[i]);
	temp_ptr = (int *)malloc(5 * sizeof(int));
	printf("~~value at temp_ptr :%d~~\n", temp_ptr);
	if (temp_ptr == NULL)
		printf("Memory is not allocated");

	else
	{
		printf("~~value at ptr :%d~~\n", ptr);
		for (i = 0; i < 5; i++)
			temp_ptr[i] = arr[i];

		free(ptr);
		ptr = temp_ptr;
		printf("~~value at ptr :%d~~\n");
	}

	printf("\n Entered elements are : ");
	for (i = 0; i < 5; i++)
		printf("%d\t", *(ptr + i));

	return 0;
}
