#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	struct Node *l_child;
	int data;
	struct Node *r_child;
} node;

void InOrder(node *root)
{
	if (root == 0)
		return;
	InOrder(root->l_child);
	printf("%d ", root->data);
	InOrder(root->r_child);
}
void PostOrder(node *root)
{
	if (root == 0)
		return;

	printf("%d ", root->data);
	PostOrder(root->r_child);
	PostOrder(root->l_child);
}
void PreOrder(node *root)
{
	if (root == 0)
		return;

	printf("%d ", root->data);
	PreOrder(root->l_child);
	PreOrder(root->r_child);
}
void insert(node **root, int key)
{

	node *tmp = (node *)malloc(sizeof(node));
	tmp->data = key;
	tmp->l_child = tmp->r_child = NULL;

	if (*root == 0)
	{
		*root = tmp;
		return;
	}
	else
	{
		node *ptr = (*root);
		node *q;
		while (ptr != 0)
		{
			q = ptr;
			if (key > ptr->data)
				ptr = ptr->r_child;
			else if (key < ptr->data)
				ptr = ptr->l_child;
			else
				return;
		}
		if (key > q->data)
			q->r_child = tmp;
		else
			q->l_child = tmp;
	}
}
// node* successor(node* ptr)
//{
//	if(ptr->r_child==0)
//		return 0;
//	else
//	{	ptr=ptr->r_child;
//		while(ptr->l_child!=0)
//			ptr=ptr->l_child;
//		return ptr;
//	}
//
// }
// node* predessor(node* ptr)
//{
//	if(ptr->l_child==0)
//		return 0;
//	else
//	{	ptr=ptr->l_child;
//		while(ptr->r_child!=0)
//			ptr=ptr->r_child;
//		return ptr;
//	}
//
// }
// void Delete_node(node** root,int key)
//{
// node* ptr=(*root);
// node* temp=0;
//	while(ptr!=0)
//	{
//		if(key < ptr->data)
//			ptr=ptr->l_child;
//		else if(key > ptr->data)
//			ptr=ptr->r_child;
//		else
//			break;
//	}
//	switch(ptr)
//	{
//		case 0: printf("%d is present in the tree.\n",key);
//		break;
//		default :
//
//	}
// }
//
int main()
{
	int n = 10;
	node *root = NULL;
	int arr[n];
	printf("Enter 10 numbers : ");
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	printf("Entered values are : \n\t");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
		insert(&root, arr[i]);
	}
	printf("\n\nTree Inorder traversal : \n\t");
	InOrder(root);
	printf("\n\nTree Postorder traversal : \n\t");
	PostOrder(root);
	printf("\n\nTree Preorder traversal : \n\t");
	PreOrder(root);
	return 0;
}
