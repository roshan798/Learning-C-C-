#include<stdio.h>
void main()
{
	
	int rows,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
//	temp=rows;
	for(i=1;i<=rows;i++)
	{
		
		
		for(j=rows;j>=i;j--)
		{
			
		printf("*");
		
		}
//		temp--;
		printf("\n");
	}
}






