/*P5.24 Program to print armstrong numbers from 100 to 999*/
#include<stdio.h>
void main()
{
	printf(" Armstrong numbers betwee 100 to 999 are :\n");
	int i, num,sum=0,d;
	for(i=100;i<=999;i++)
	{
		num=i;
		while(num>0)
		{
			d=num%10;
			sum=sum+(d*d*d);
			num=num/10;
			
			
		}
		if(sum==i)
		{
			printf(" %d \t",i);
		}
		sum=0;
		
	}
}
