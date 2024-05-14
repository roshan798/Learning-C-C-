#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	struct Node *left;
	int data;
	int height;
	struct Node *right;
} node;

node *root = NULL;

int NodeHeight(node *p)
{
	int hl, hr;
	hl = p && p->left ? p->left->height : 0;
	hr = p && p->right ? p->right->height : 0;
	return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(node *p)
{
	int hl, hr;
	hl = p && p->left != 0 ? p->left->height : 0;
	hr = p && p->right != 0 ? p->right->height : 0;
	return hl - hr;
}

node *LLRotation(node *p)
{
	node *pl = p->left;
	node *plr = pl->right;
	pl->right = p;
	p->left = plr;
	p->height = NodeHeight(p);
	pl->height = NodeHeight(pl);
	if (root == p)
		root = pl;
	return pl;
}
node *LRRotation(node *p)
{
	node *pl = p->left;
	node *plr = pl->right;

	pl->right = plr->left;
	p->left = plr->right;

	plr->left = pl;
	plr->right = p;

	plr->height = NodeHeight(plr);
	pl->height = NodeHeight(pl);
	p->height = NodeHeight(p);

	if (root == p)
		root = plr;
	return plr;
}

node *RRRotation(node *p)
{
	node *pr = p->right;
	node *prl = pr->left;
	pr->left = p;
	p->right = prl;
	p->height = NodeHeight(p);
	pr->height = NodeHeight(pr);
	if (root == p)
		root = pr;
	return pr;
}

node *RLRotation(node *p)
{
	node *pr = p->right;
	node *prl = pr->left;

	p->right = prl->left;
	pr->left = prl->right;

	prl->right = pr;
	prl->left = p;

	/*
		pl->right=plr->left;
	p->left=plr->right;

	plr->left=pl;
	plr->right=p;
	*/

	prl->height = NodeHeight(prl);
	pr->height = NodeHeight(pr);
	p->height = NodeHeight(p);
	if (root == p)
		root = prl;
	return prl;
}

void LevelOrder(node *root)
{

	int size = 100;
	node *q[100];
	q[0] = root;
	int front = 0, rear = 1;
	while (front != rear)
	{
		node *p = q[front];
		printf("%d  ", p->data);
		front = (front + 1) % size;
		if (p->left != 0)
		{
			q[rear] = p->left;
			rear = (rear + 1) % size;
		}
		if (p->right != 0)
		{
			q[rear] = p->right;
			rear = (rear + 1) % size;
		}
	}
}
node *Insert(node *p, int key)
{
	node *t = NULL;
	if (p == NULL)
	{
		t = (node *)malloc(sizeof(node));
		t->data = key;
		t->height = 1;
		t->left = t->right = NULL;
		return t;
	}
	if (key < p->data)
		p->left = Insert(p->left, key);
	else if (key > p->data)
		p->right = Insert(p->right, key);

	p->height = NodeHeight(p);

	if (BalanceFactor(p) == 2 && BalanceFactor(p->left) == 1)
		return LLRotation(p);
	else if (BalanceFactor(p) == 2 && BalanceFactor(p->left) == -1)
		return LRRotation(p);
	else if (BalanceFactor(p) == -2 && BalanceFactor(p->right) == -1)
		return RRRotation(p);
	else if (BalanceFactor(p) == -2 && BalanceFactor(p->right) == 1)
		return RLRotation(p);
	return p;
}
int main()
{
	root = Insert(root, 10);
	printf("Root : %d\n", root->data);
	Insert(root, 20);
	printf("Root : %d\n", root->data);
	Insert(root, 30);
	printf("Root : %d\n", root->data);
	Insert(root, 25);
	printf("Root : %d\n", root->data);
	Insert(root, 28);
	printf("Root : %d\n", root->data);
	Insert(root, 27);
	printf("Root : %d\n", root->data);
	Insert(root, 5);
	printf("Root : %d\n", root->data);
	LevelOrder(root);
}
