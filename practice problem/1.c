#include <stdio.h>
#include <stdlib.h>
int main()
{
	int t, c, m;
	scanf("%d ", &t);
	int *test = (int *)malloc(t * sizeof(int));
	for (int i = 1; i <= t; i++)
	{
		scanf("%d %d", &c, &m);
		int *arr = (int *)malloc(c * sizeof(int));
		int sum = 0;
		for (int i = 0; i < c; i++)
		{
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		test[i - 1] = (sum % m);
	}
	for (int i = 1; i <= t; i++)
	{
		printf("case #%d: %d\n", i, test[i - 1]);
	}
}
