#include <stdio.h>
int fact(int n)

{
	if ((n == 1) || (n == 0))
		return;

	return n * fact(n - 1);
}
void main()
{
	int n, r, nfact, cfact;
	printf("Enter  the value of \n n : ");
	scanf("%d", &n);
	printf("\n r : ");
	scanf("%d", &r);
	//

	printf("permutation (p,r) = %d", fact(n) / fact(n - r));
}
