#include <stdio.h>
int fact(int n)

{
	if ((n == 0) || (n == 1))
		return;

	return n * fact(n - 1);
}

void main()
{
	int n, r;
	printf(" Enter the values of n & r : ");
	scanf("%d%d", &n, &r);

	printf(" \n combination(n,r)  = %d", fact(n) / (fact(r) * fact(n - r)));
}
