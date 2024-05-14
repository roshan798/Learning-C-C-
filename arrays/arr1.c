// calculating totel average marks in all sem of diploma and aggregate of 5th and 6th sem.
#include <stdio.h>

void main()
{
	int i;
	float aggregate, marks[6], sum = 0, average;
	for (i = 1; i <= 6; i++)
	{
		printf("Enter mark for sub %d : ", i);
		scanf("%f", &marks[i]);
		printf("\n");
	}

	for (i = 1; i <= 6; i++)
		sum += marks[i];

	average = sum / 6;
	aggregate = (marks[5] + marks[6]) / 2;
	printf("Sum : %.2f \n Average : %.2f  \n Aggregate  : %.2f", sum, average, aggregate);
}
