#include<stdio.h>
void main()
{
	int  a=0;
	int rows,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			a++;
		printf("%d ",a);
		
		}
		
		printf("\n");
	}
}
