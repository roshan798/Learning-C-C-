#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};

typedef struct node node;


node* create(node* p,int count)
{
	int i;
	node *temp;
	node* head;
	for(i=0;i<count;i++)
	{
		temp=(node *)malloc(sizeof(node));
		if(p==NULL)
			p=head=temp;
		else
		{
			p->next=temp;
			p=p->next;
		}
	}
	p->next=NULL;
	
	return head;
	
}

void scan(node* p)
{
	while(p!=0)
	{
		scanf("%d",&(p->data));
		p=p->next;
	}
}

void print(node* p)
{
	while(p!=0)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}
int sum(node* p)
{
	int sum=0;
	while(p)
	{
		sum+=p->data;
		p=p->next;
	}
	return sum;
}
int main()
{
	node* head=NULL;
	int num;
	printf("Enter the number of linked list to be created : ");
	scanf("%d",&num);
	head=create(head,num);
	
	
	printf("\n\nEnter list elements : ");
	scan(head);
	printf("\nEntered elements are : ");
	print(head);
	
	printf("\n\n SUM of all the elements : %d",sum(head));
	
	return ;
}
