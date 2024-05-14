//Accept any five digit number and print the value of remainder after dividing by 3
#include<stdio.h>
void main()
{
	printf("Enter a 5digit number\n");
	int num;
	scanf("%5d",&num);
	printf(" \n remainder after dividing %d by 3 \n \t %d", num, num%3);
	
}
