//Write a program to accept the number in decimal and print the number in octal and hexadecimal
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number in decimal\n ");
	scanf("%d",&num);
	printf("\n in octal = %o\n in hexadecimal = %x",num,num);
	
}
