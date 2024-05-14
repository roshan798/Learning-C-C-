#include<stdio.h>
#include<stdlib.h>
int* create(int size)
{
	int num,sum=0;
	int* temp=(int *)malloc(size * sizeof(int));
	for(int i=0 ;i<size;i++)
	{
		scaf("%d",&num);
		sum+=num;
		temp[i]=sum;
	}
	return temp;
}

int main()
{
	int s1,s2,s3;
	scanf("%d %d %d",&s1,&s2,&s3);
	int *st1,*st2,st3;
	st1=create(s1);	
	st2=create(s2);
	st3=create(s3);
	
}
