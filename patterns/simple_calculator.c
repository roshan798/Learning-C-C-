#include<stdio.h>
addnumbers(void);

void main()
{
	char oprator;
	printf("which calculation you want to perform. \n Enter operater :  ");
	scanf("%c",&oprator);
	switch(oprator)
	{
		case '+':
			addnumbers();
			break;
		case '-':
			printf("A-B = %d",substract());
			break;
			default:
				printf(" invalid oprator");
	}
}
int substract(void)
{
	int a,b;
	printf("Enter two number to substract \n");
	scanf("%d %d",&a,&b);
	return a-b;
}

void addnumbers(void)   // function with no arguments and no return value
{
	int num1,num2;
	printf("Enter two numbers to add \n ");
	scanf("%d %d",&num1,num2);
	printf("A +B = %d",num1+num2);
}
