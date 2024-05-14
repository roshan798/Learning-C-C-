#include<stdio.h>
void main()
{
	int i, j ,rows;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		
		
			for(j=1;j<=rows;j++)
			
			{
			if((i==1)||(i==rows)||(j==1)||(j==rows))
			
			
			
			
			{
				printf("*");
			}
			else
			{
				printf(" ");	
			}
			}
			
			
		
		
//		else
//		{
//			printf("*");
//			
//			for(j=1;j<=rows-2;j++)
//		
//			
//			printf("*");
//	
//		}
		printf("\n");
	}
}
