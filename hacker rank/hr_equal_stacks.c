#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
typedef struct stack
{
	int *arr;
	int top;
	int size;
	int sum;
}stack;
int min=INT_MAX;
int create(stack* a)
{
	int sum=0;
	a->arr=(int*)malloc(a->size *sizeof(int));
	a->top=0;
	int i=0;
	while(i<a->size){
		scanf("%d",&a->arr[i]);
		sum+=a->arr[i++];
	}
	if(sum < min) min=sum;
	return sum;
}
void re_move(stack* s)
{
	while(s->sum > min)
		s->sum-=(s->arr[s->top++]);
	if(s->sum < min)
		min=s->sum;
}
int main()
{
	stack n1,n2,n3;
	scanf("%d %d %d ",&n1.size,&n2.size,&n3.size);
	n1.sum=create(&n1);
	n2.sum=create(&n2);
	n3.sum=create(&n3);
	while(n1.sum!=n2.sum && n2.sum!=n3.sum)
	{
		if(min==0) break;
		if(n1.sum > min) re_move(&n1);
		if ( n2.sum > min) re_move(&n2);
		if ( n3.sum > min) re_move(&n3);	
	}
	printf("min = %d",min);
}
