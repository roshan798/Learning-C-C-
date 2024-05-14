#include<stdio.h>
void main()
{
	int rows,i,j,temp=1;
	int check=0;
	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(i=1;i<=rows;i++)
	{
		temp=rows;
		
		for(j=1;j<=rows-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
		printf("%d ",temp);
		
		if(i!=1)
			j>=i?temp--:temp++;
		}
		printf("\n");
		
	}
	
}
