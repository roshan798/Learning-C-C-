///hollow pyramid star pattern
#include<stdio.h>
void main()
{
	int rows,i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)
		printf(" ");
		
		for(j=1;j<=(i*2)-1;j++)
		{
			if((j==1)||(j==i*2-1)||(i==rows))
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
