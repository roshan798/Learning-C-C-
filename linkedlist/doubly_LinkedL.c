#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *pre,*next;
	 
};

typedef struct node node;

node* create_DLL(node* p,int num) //creatin link list
{
	int i;
	node* head;
	node* temp;
	
	for (i=0;i<num;i++)
	{
		temp=(node*)malloc(sizeof(node));
		printf("Enter the value of %d node : ",i);
		scanf("%d",&(temp->data));     //taking value of each node
		
		if(p==0)
		{
			temp->pre=p;
			p=temp;
			head=p;
		}
		else
		{
			temp->pre=p;
			p->next=temp;
			p=p->next;
		}
	}
	
	p->next=NULL;
	return head;
}
 
 void display(node * p)     //traversing  from both head and last node
 {
 	if(p->next==0)  //this is for trversing from last node
	{
 		while(p!=0)
 		{
 			printf("%d  ",p->data);
 			p=p->pre;
		}
    }
	else      //this is for trvrsing forward
	{
		while(p!=NULL)
		{
			printf("%d  ",p->data);
			p=p->next;
		}
	}
 }
 int length_of_list(node* p)
{
	int i=0;
	while(p!=NULL)
	{
		i++;
		p=p->next;
	}
	return i;
}

node* insertion(node* p)
{
	node* temp_head=p;
	int index,i=0;
	node *temp=NULL;
	
	printf("\nEnter the index : ");
	scanf("%d",&index);
	
	if(index<0 || index>length_of_list(p))
	{
		printf("\nInvalid index number!!");
		return temp_head;
	}
	else if(index==0)   //at first node
	{
		temp=(node*)malloc(sizeof(node));
		temp->pre=NULL;
		printf("\nEnter value of 0 node : ");
		scanf("%d",&(temp->data));
		temp->next=p;
		
		return temp;	
    }
    else			// at given index
	{
		temp=(node*)malloc(sizeof(node));
		
		int i;
		for(i=0;i<index-1;i++)
			p=p->next;
			
			printf("\nEnter value of %d node : ",index);
			scanf("%d",&(temp->data));
			
			temp->pre=p;
			temp->next=p->next;
			
			if(p->next!=NULL)
				p->next->pre=temp;
			
			p->next=temp;	
	}
	return temp_head;
}



node* delete_node(node *p)
{
	node* new_head=p;
	int i,index;
	printf("\n\nEnter index of to delete that node : ");
	scanf("%d",&index);
	if(index<0 || index>length_of_list(p)-1)
	{
		printf("\nInvalid index number !!");
		return new_head;
	}
	else if(index==0)
	{
		new_head=p->next;
		new_head->pre=p->pre;
		free(p);
		return new_head;
	}
	else
	{
		for (i=0;i<index;i++)
			p=p->next;
			
		if(p->next!=0)
		p->next->pre=p->pre;
		
		p->pre->next=p->next;
		free(p);
		
		return new_head;
	}
}
 
int main()
{
	int length;
	node * head=NULL;
//	node* last=NULL;
//	node* last;
	printf("Enter the length of the list to be created : ");
   	scanf("%d",&length);
	head = create_DLL(head,length);    //1st node address
	
	head = insertion(head);
	printf("\n\n After adding a node in given index : ");
	display(head);
	
	head=delete_node(head);
	printf("\n\n After deleting a node in given index : ");
	display(head);

    return 0;	
}
