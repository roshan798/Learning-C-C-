//program to multiiply 2numbers without using *  operator
#include<stdio.h>
void main()

{
	int num1,num2;
	printf("Enter two numbers :\n");
	scanf("%d %d",&num1,&num2);
	int i,temp=num1; 
	for(i=1;i<num2;i++)
	{
	  num1=(num1+temp);
	  
	}
	printf("\n %d", num1);
}
