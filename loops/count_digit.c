// count number o digits of a number


#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter number :  ");
	scanf("%d",&num);
	do
	{
		count++;
		num/=10;
	}
	while(num>1);
	printf("\n Number of digits : %d",count);
	return 0;
}
