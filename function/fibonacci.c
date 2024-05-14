#include <stdio.h>
int fib(int n)
{
	if ((n == 0) || (n == 1))
		return n;
	else
		return fib(n - 2) + fib(n - 1);
}

int main()
{
	int n, i;
	printf("Enter number of terms of fibonacci series : ");
	scanf("%d", &n);

	//	int a=0,b=1,c;
	//	for(i=0;i<n;i++) {
	//		printf("%d  ",a);
	//		c=a+b;
	//		a=b;
	//		b=c;
	//	}
	int t;
	printf("\n\nrecursively : ");
	for (i = 0; i < n; i++)
	{
		t = fib(i);
		printf("%d  ", t);
	}
	return 0;
}
