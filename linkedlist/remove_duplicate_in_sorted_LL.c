#include<stdio.h>
#include<stdlib.h>

typedef struct node node;
struct node
{
    int data;
    node* next;
};

void insert(node** head,int data)
{
    node* temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=(*head);
    (*head)=temp;
}

void delete_duplicate(node* head)
{
    node* c=head;
    node* n;
    
    while(c->next!=0)
    {
        n = c->next;
        if(c->data == n->data)
        {
            c->next=n->next;
            free(n);
        }
        else
            c=c->next;
    }
}

void display(node* head)
{
    
    while(head!=0)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
}

int main()
{
    printf("how many numbers you want to enter : ");
    int num,n,i;
    node* head=NULL;
    scanf("%d",&num);
    
    printf("\nEnter %d number : ",num);
    
    for(i=0;i<num;i++)
    {
        scanf("%d",&n);
        insert(&head,n);
    }
    printf("\nEntered numbers : ");
    display(head);
    
    printf("\nAfter deleting duplicate numbers : ");
    delete_duplicate(head);
    display(head);
    
    return 0;
}
