#include<stdio.h>
int main()

{
	int count,i,x,y,z;
	x=0;
	y=1;
	printf("Enter the number of terms  : ");
	scanf("%d",&count);
	printf("\n %d \t",y);
	for(i=1;i<count;i++)
	{
		z=(x+y);
		printf("%d \t",z);
		
		x=y;
		y=z;
		
	}
	
}
