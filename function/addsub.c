#include <stdio.h>
void add();
int substract();
int main()
{
	int num1, num2;
	printf("Enter what calculation you want to do(e.g- +,-,*,/)\n");
	char op;
	scanf("%c", &op);
	printf("Enter two numbers to %c\n", op);

	scanf("%d %d", &num1, &num2);
	switch (op)
	{
	case '+':

		add(num1, num2);
		break;
	case '-':

		printf("\n %d - %d =%d", num1, num2, substract(num1, num2));
		break;
	case '*':

	default:
		printf("\n Invalid input");
	}
}
void add(int n1, int n2)
{
	printf("\n %d + %d =%d", n1, n2, n1 + n2);
}
int substract(int n1, int n2)
{
	return n1 - n2;
}
