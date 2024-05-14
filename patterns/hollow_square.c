//hollow square star pattern
#include<stdio.h>
void main()
{
	int i, j ,rows;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		if((i==1)||(i==rows))
		{
			for(j=1;j<=rows;j++)
			printf("*");
			
		
		}
		else
		{
			printf("*");
			
			for(j=1;j<=rows-2;j++)
			printf(" ");
			
			printf("*");
	
		}
		printf("\n");
	}
}
