#include <stdio.h>
#include <stdlib.h>
typedef struct node node;
struct node
{
	node *left;
	int data;
	node *right;
};
struct queue
{
	node *data;
	struct queue *next;
};

int main()
{

	return 0;
}
