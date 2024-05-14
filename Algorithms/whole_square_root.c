#include <stdio.h>
double eps = 1e-7;
void squareRoot(int n)
{
	double lo = 1, hi = n, mid;
	while (hi - lo > eps)
	{
		mid = (hi + lo) / 2;
		if (mid * mid == n)
			break;
		else if (mid * mid > n)
			hi = mid;
		else
			lo = mid;
	}
	printf("\n square root of %d : %lf", n, mid);
}
void whole_sqrt(int n)
{
	int lo = 1, hi = n, mid = 1;

	while (hi != lo)
	{
		mid = (hi + lo) / 2;
		if (lo == mid)
		{
			squareRoot(n);
			return;
		}
		if (mid * mid == n)
			break;
		else if (mid * mid > n)
			hi = mid;
		else
			lo = mid;
	}
	printf("\n square root of %d : %d\n", n, mid);
}
int main()
{
	int n;
	printf("Enter number  : ");
	scanf("%d", &n);
	whole_sqrt(n);
}
