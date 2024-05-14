#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	struct node *l_child;
	int data;
	struct node *r_child;
} node;

node *insert(node *root, int data) // insertion
{
	if (root == NULL)
	{
		node *temp = (node *)malloc(sizeof(node));
		temp->l_child = temp->r_child = NULL;
		temp->data = data;
		return temp;
	}
	else
	{
		if (data < root->data)
			root->l_child = insert(root->l_child, data);
		else if (data > root->data)
			root->r_child = insert(root->r_child, data);
	}
	return root;
}
int no_of_node(node *root) // no. of nodes
{
	int x, y;
	if (root == NULL)
		return 0;
	else
	{
		x = no_of_node(root->l_child);
		y = no_of_node(root->r_child);
		return x + y + 1;
	}
}
void Inorder(node *root) // INORDER traversal printing data in ascending order
{
	if (root != 0)
	{
		Inorder(root->l_child);
		printf("%d  ", root->data);
		Inorder(root->r_child);
	}
	else
		return;
}

int Height(node *root) // height of BST
{
	int x, y;
	if (root == 0)
		return 0;
	else
	{
		x = Height(root->l_child);
		y = Height(root->r_child);
		return x > y ? x + 1 : y + 1;
	}
}
void delete_node(node *root, int key)
{
	if (root->data == key)
	{
	}
}
int main()
{
	int n = 10;
	printf("Enter the no of elements you want to enter : ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nEnter %d value : ", i);
		scanf("%d", &arr[i]);
	}
	node *root = NULL;
	for (int i = 0; i < n; i++)
		root = insert(root, arr[i]);
	printf("\nInorder traversal of BST  : ");
	Inorder(root);
	printf("\n\nNumber of nodes in BST : %d\n", no_of_node(root));
	printf("\nHeight BST : %d\n", Height(root));
	return 0;
}
