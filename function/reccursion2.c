#include <stdio.h>
int power(int a, int pow)
{

	if (pow == 1)
		return a;

	return (a * power(a, pow - 1));
}
void main()
{
	int num, pow;
	printf("enter number : ");
	scanf("%d", &num);
	printf("\n Enter it's power : ");
	scanf("%d", &pow);

	printf("\n %d", power(num, pow));
}
