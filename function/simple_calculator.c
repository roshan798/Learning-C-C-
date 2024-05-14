#include <stdio.h>
void addnumbers(void);
int substract(void);
void multiply(int, int);
int divide(int, int);

void main()
{
	int num1, num2, result;
	char oprator;
	printf("which calculation you want to perform. \n Enter operater :  ");
	scanf("%c", &oprator);
	switch (oprator)
	{
	case '+':
		addnumbers();
		break;
	case '-':
		printf("A-B = %d", substract());
		break;
	case '*':
	case 'X':
	case 'x':
		printf("Enter two number two multiply \n ");
		scanf("%d %d", &num1, &num2);
		multiply(num1, num2);
		break;
	case '/':
		printf("Enter two numbers to divide and print the remainder \n");
		scanf("%d %d", &num1, &num2);

		printf(" A / B = %d ", divide(num1, num2));

		break;

	default:
		printf(" invalid oprator");
	}
}

int divide(int a, int b)
{
	printf(" in  the function");
	int result;
	result = a / b;
	return result;
}

void multiply(int a, int b)
{
	printf(" A*B =%d", a * b);
}
int substract(void) // function with no arguments and return value
{
	int a, b;
	printf("Enter two number to substract \n");
	scanf("%d %d", &a, &b);
	return a - b;
}

void addnumbers(void) // function with no arguments and no return value
{
	int num1, num2;
	printf("Enter two numbers to add \n ");
	scanf("%d %d", &num1, &num2);
	printf("A +B = %d", num1 + num2);
}
