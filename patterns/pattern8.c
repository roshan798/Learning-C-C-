#include<stdio.h>
void main()
{
	
	int rows,i,j,temp,check;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
//	temp=rows;
	temp=1;
	check=rows/2;
	
	
	
	for(i=1;i<=rows;i++)
	{ 
	
		for(j=rows;j>=i;j--)
		{
			printf("%d",temp);
			
		}
		
		i>check?temp--:temp++;
		printf("\n");
	}
	
	
}
