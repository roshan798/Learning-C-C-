#include <stdio.h>
int fibo(int n)
{
	if ((n == 0) || (n == 1))
		return 1;

	else
		return fibo(n - 1) + fibo(n - 2);
}
void main()
{
	int term, i;
	printf("Enter number of terms of fibonacci series you want to print : ");
	scanf("%d", &term);
	for (i = 0; i < term; i++)
		printf(" \n %d  ", fibo(i));
}
