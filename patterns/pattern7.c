#include<stdio.h>
void main()
{
	printf("Enter number of rows :  ");
	int rows,i,j;
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		
	printf("\n");	
	}
	for(i=1;i<rows;i++)
	{
		for(j=rows;j>i;j--)
		printf("*");
		
		printf("\n");
	}
	
}
