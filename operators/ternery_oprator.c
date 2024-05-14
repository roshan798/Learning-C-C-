//Accept any two numbers, if the first number is greater than second then print the sum of these
//two numbers, otherwise print their difference. Write this program using ternary operator
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter teo number\n a= ");
	scanf("%d",&num1);
	printf("\n b = ");
	scanf("%d",&num2);
	printf("\n %d",num1>num2?num1+num2:num1-num2);
	return 0;
	
}
