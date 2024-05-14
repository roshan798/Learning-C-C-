#include <stdio.h> //array searching
int main()
{ //

	int array[] = {74, 6, 78, 6, 77, 65, 556, 554, 66, 54, 56, 5, 66};
	int num, i, array_size;
	printf("Enter the number to be searched : ");
	scanf("%d", &num);
	// linear search
	array_size = sizeof(array) / sizeof(int);
	for (i = 0; i < array_size; i++)
	{
		if (num == array[i])
		{
			printf("\n%d is %d at index of array.", num, i);
			break;
		}
		if (i == array_size - 1)
			printf("\n%d is not in the array.", num);
	}
}
