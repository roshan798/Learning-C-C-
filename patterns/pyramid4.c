#include<stdio.h>
void main()
{
	int rows,i,j;
//	int check=0;
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
//		temp=rows;
		
		for(j=1;j<i;j++)
		{
			printf("  ");
		}
		for(j=(2*rows)-1;j>=(2*i)-1;j--)
		{
		printf("* ");
		
		}
		printf("\n");
		
	}
	
}
