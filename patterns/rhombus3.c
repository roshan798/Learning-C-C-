//hollow rhombus star pattern
#include<stdio.h>
void main()
{
	int i,j, rows;
	printf("Enter number of roes :" );
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		
		for(j=1;j<=rows;j++)
		{
			if((i==1)||(i==rows)||(j==1)||(j==rows))
			{
				printf("*");
			}
			else
			{
				printf(" ");t
				
			}
		}
		printf("\n");
	}
}

