#include <stdio.h>
long int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}
int main()
{
	long int num;
	printf("Enter a number to print its factorial : ");
	scanf("%ld", &num);
	printf(" \n factorial of %d is : %ld \n %d", num, fact(num), sizeof(fact(num)));
	return 0;
}
