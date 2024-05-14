#include <stdio.h> // finding maximumm and minimum number array elements
void main()
{
	int arr[6], min = 0, max = 0, i;
	printf("Enter the elements of array :\n");
	for (i = 0; i < 6; i++)
	{
		printf("enter %d element : ", i);
		scanf("%d", &arr[i]);
	}
	max = min = arr[0];
	printf("\n Array elements are : \n");
	for (i = 1; i < 6; i++)
	{
		printf("%d ", arr[i]);
		if (arr[i] < min)
			min = arr[i];

		if (arr[i] > max)
			max = arr[i];
	}
	printf("\n maximum = %d \n minimum = %d ", max, min);
}
