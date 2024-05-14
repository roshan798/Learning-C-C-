//Write a program'to accept the principal, rate, and number of years and find out the simple interest.
#include<stdio.h>
int main()
{
	int p,time,rate,si;
	
	printf("To find simple intrest \n");
	printf(" Enter principle \t ");
	scanf("%d",&p);
	printf("\n Enter rate of intrest\t ");
	scanf("%d",&rate);
	printf("\n Enter time(in years)\t");
	scanf("%d",&time);
	printf("\n Intrest on %d rupees in %d years with %d percent intrest rate is %d rupees",p,time,rate,(p*rate*time)/100);
	
	si= ((p*rate*time)/100)+p;
	
	printf(" \nTotel amount = %d",si);
	return 0;
	
}
