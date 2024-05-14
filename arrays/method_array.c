#include <stdio.h> //primary operations on array(saved in stack)
int search(int *arr, int length)
{
	int num, i;
	printf("\n Enter the number you want to search :");
	scanf("%d", &num);
	for (i = 0; i < length; i++)
	{
		if (*(arr + i) == num)
			return i;
	}

	return length + 1;
}

void scan(int *arr, int length)
{
	int i;

	printf("\nEnter %d elements of array :", length);
	for (i = 0; i < length; i++)
		scanf("%d", arr + i);
}

void print(int *arr, int length)
{
	int i;
	printf("\nElements are : ");
	for (i = 0; i < length; i++)
		printf("%d ", *(arr + i));
}

void insert(int *arr, int length)
{
	int i, address, num;

	printf("\nIn which place of array you want to insert (0<number<%d): ", length);
	scanf("%d", &address);
	printf("Enter the number you want to add :");
	scanf("%d", &num);
	for (i = length - 1; i >= address - 1;)
	{
		*(arr + i) = *(arr + (--i));
	}
	*(arr + (address - 1)) = num;
}

int delet(int *arr, int length)
{
	int i, num, index = 0;
	int count = 0;
	printf("\nEnter the number you want to delete : ");
	scanf("%d", &num);

	for (i = 0; i < length; i++)
	{
		if (*(arr + i) == num)
			index = i;
		else
		{

			++count;

			if (count == length)
				return 0;
		}
	}
	for (i = index; i < length; i++)
	{

		*(arr + i) = *(arr + (i + 1));
	}
	return 1;
}
int main()
{
	int arra[100];
	int num;
	int opt;
	int num_index;
	printf("Enter the length of array :");
	scanf("%d", &num);
	scan(arra, num);  // takking input
	print(arra, num); // printing output

	int i;
	char ch = NULL;
	do
	{
		printf("\nPress '1' to insert a number in the array");
		printf("\nPress '2' to search a number in the array");
		printf("\nPress '3' to delete a number in the array\n");
		scanf("%d", &opt);
		switch (opt)
		{
		case 1:
			num++;
			insert(arra, num); // insert
			print(arra, num);
			break;
		case 2:
			num_index = search(arra, num);
			if (num_index >= 0 && num_index < num)
				printf("\n The number is at %d position", num_index + 1);
			break;
		case 3:
			if (delet(arra, num) == 0)
				printf("\n Entered number is not available in array for deletion. \n");
			else
				print(arra, num - 1);
			break;
		default:
			printf("\nInvalid input");
		}

		printf("\n Enter 'y' to perform those operation again. Otherwise press enter : ");
		scanf("%c", &ch);
		scanf("%c", &ch);
	} while (ch == 'y');
}
