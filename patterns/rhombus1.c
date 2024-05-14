//rhombus star pattern
#include<stdio.h>
void main()
{
	int rows, i,j;
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
{
	for(j=1;j<i;j++)
	printf(" ");
	
	for(j=1;j<=rows;j++)
	printf("*");
	
	printf("\n");
}
	
	
}
