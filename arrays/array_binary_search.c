#include <stdio.h> //binary search (array must be sorted)
int main()
{
	int i = 10;
	int arr[] = {2, 34, 56, 78, 99, 123, 456, 789, 837, 999, 1000, 1234};
	int low = 0, mid, high;
	int num, array_size, index = -1;
	array_size = sizeof(arr) / sizeof(int);
	high = array_size;

	printf("Enter the number to search : ");
	scanf("%d", &num);
	while (low <= high)
	{

		mid = (low + high) / 2;
		if (arr[mid] == num)
		{
			index = mid;
			break;
		}
		if (arr[mid] > num)
		{
			high = mid - 1;
		}
		if (arr[mid] < num)
		{
			low = mid + 1;
		}
	}
	if (index == -1)
	{
		printf("\n %d is not in the array", num);
		return 0;
	}
	printf("%d  ", index);
	return 0;
}
