#include <stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
typedef struct node node;

node* create_CL(node* p)
{
	int i,num;
	node* temp, *head=p;
	printf("\nEnter the length of list to be created : ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter value of %d index : ",i);
		scanf("%d",&(temp->data));
		
		if(p==NULL)
			head=p=temp;
		else
		{
			p->next=temp;
			p=p->next;
		}
	}
	p->next=head;
	return head;
}

void display(node* p)
{
	node* temp=p;
	do
	{
		printf("%d  ",p->data);
		p=p->next;
	}
	while(p!=temp);
}

int main()
{
	node* head=NULL;
	head=create_CL(head);
	printf("\n\nEnter elements of link list : ");
	display(head);
	
	head = insertion(head);
	return 0;
}
