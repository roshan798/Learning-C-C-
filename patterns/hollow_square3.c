// hollow square with diagonal star pattern
#include<stdio.h>


void main()
{
	int i,j,rows;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if((i==1)||(i==rows)||(j==1)||(j==rows)||(j==i)||j==rows-(i-1))
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
				
			}
			
		}
		printf("\n");
	}
}
