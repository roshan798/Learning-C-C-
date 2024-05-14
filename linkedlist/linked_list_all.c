#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};

typedef struct node node;


node* create(node* p)		//craeatin a linked list
{
	int i,num;
	node *temp,*ptr=p;
	printf("Enter the  number of linked list to be created : ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		temp=(node*)malloc(sizeof(node));
		temp->next=NULL;
		
		printf("\nEnter value of %d node : ",i);
		scanf("%d",&(temp->data));
		
		if(ptr==NULL)
		{
			ptr=temp;
			p=ptr;
		}
		else
		{
			ptr->next=temp;
			ptr=ptr->next;
		}
		
	}
	return p;
}

void print(node* p)		//printing list
{
	
	while(p!=NULL)
	{
		printf("%d  ",p->data);
		p=p->next;
	}
}


node* insertion(node* p)    //Inserting a node in after 1st node
{
	node* temp_head=p;
	int index,i=0;
	node *temp;
	printf("\nEnter the index : ");
	scanf("%d",&index);
	if(index<0)
	{
		printf("\nInvalid index number!!");
		return temp_head;
	}
	else if(index==0)
	{
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter the data to insert at the first link : ");
		scanf("%d",&(temp->data));
		temp->next=p;
		temp_head=temp;
	
	return temp_head;
	}
	
	else
	{
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter the data : ");
		scanf("%d",&(temp->data));
	
	for(i=0;i<index-1;i++)
		p=p->next;
	
	temp->next=p->next;
	p->next=temp;
	
	return temp_head;
	}	
}

void insert_at_last(node* p)     //Inserting a node in the end of the linked list
{
	printf("\nEnter the data to insert at the last link : ");
	node* temp;
	temp=(node*)malloc(sizeof(node));
	scanf("%d",&(temp->data));
	temp->next=NULL;
	while(p->next!=NULL)
		p=p->next;
	p->next=temp;
}

node* delete_1st_node(node* p)    //deleting 1st node
{
	node* temp=p->next;
	free(p);
	
	return temp;
	
}

void delete_by_value(node* p)     //deleting a node in between 1st and last node by data
{
	int num;
	printf("\nEnter the number to delete : ");
	scanf("%d",&num);
	node* temp=p->next;
	while(temp->next!=NULL)
	{
		if(temp->data==num)
		{
			p->next=temp->next;
			free(temp);
			return ;
		}
		
		p=p->next;
		temp=temp->next;
	}
}

void delete_last_node(node* p)
{
	node* temp=p->next;
	while(temp->next!=NULL)
	{
		p=p->next;
		temp=temp->next;
	}
	p->next=NULL;
}

 int search(node* p,int num)   //searching (returns index of the number)
{
	int i=0;
	while(p->next!=NULL)
	{
		if(p->data==num)
		{
			return i;
		}
		i++;
		p=p->next;
	}
	
	if(p->data==num)
	return i++;
	
	return -1;
	
}
int length_of_linked_list(node* p)      //returns length of linked list
{
	int count=1;
	while(p->next!=NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}

void sorting(node* p)
{
	int t,i;
	node* temp;
	int count=length_of_linked_list(p);
	
	while(p!=NULL)
	{
		temp=p->next;
		while(temp!=NULL)
		{
			if(temp->data < p->data)
			{
				t=p->data;
				p->data = temp->data;
				temp->data=t;
			}
			temp=temp->next;
		}
		p=p->next;
	}
}

void reverse(node* p)
{
	int i=length_of_linked_list(p);
	int arr[i];
	node* temp=p;
	while(p)
	{
		arr[--i]=p->data;
		p=p->next;
		
	}
	i=0;
	while(temp)
	{
		temp->data=arr[i++];
		temp=temp->next;
	}	
}

node * reverse_link(node * p)
{
	node *q,*r;
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		
	} 
	return q;
}
node * Reverse_link(node * p,int ct)
{
	int i=ct;
	node* tmp=p;
	node *q,*r;
	while(i-->0 && p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
		
	}
	
	if ( p!=NULL) {
		tmp->next=Reverse_link(p,ct);
	}
	else { 
		tmp->next=p;
	}
	return q;
}


int main()
{
	node* head=NULL;
	
	head=create(head);
	
	printf("\nEntered elements are : ");
	print(head);
	
	

	
//	head=insertion(head);
//	printf("\n\nInserting in between 1st and last node elements are : ");
//	print(head);
//	
//	insert_at_last(head);
//	printf("\nafter inserting at last elements are : ");
//	print(head);
//	
//	head=delete_1st_node(head);
//	printf("\n\n1st node deletion  elements are : ");
//	print(head);
//	
//	delete_by_value(head);
//	printf("\n\ndeleting in between : ");
//	print(head);
//	
//	delete_last_node(head);
//	printf("\n\nafter  deleting last node : ");
//	print(head);
//	
//	int s_num,index;
//	printf("\n\nEnter the number you want to search : ");
//	scanf("%d",&s_num);
//	index=search(head,s_num);	
//	if(index<0)
//		printf("\n%d is not available in the list.");
//	else
//			printf("\n%d is at %d index.",s_num,index);
//	
//	printf("\n\nAfter sorting : ");
//	sorting(head);
//	print(head);
//	
//	printf("\n\nReversing linked list element with the help of another array : ");
//	reverse(head);
//	print(head);	
	int fr;
	printf("\nEnter frequency of reversing node  : ");
	scanf("%d",&fr);
	head = Reverse_link(head,fr);
	printf("\n\nReversing linked list element by changing link : ");
	print(head);
}
