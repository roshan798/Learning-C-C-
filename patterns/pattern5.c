#include<stdio.h>
void main()
{
	
	int rows,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			
		printf("%d ",(i+j)%2?0:1 );
		
		}
		
		printf("\n");
	}
}
