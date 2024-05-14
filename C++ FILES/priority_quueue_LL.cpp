#include <iostream>
#include <stdlib.h>
using namespace std;

// typedef struct node node;
class node
{
public:
	char data;
	int priority;
	node *next;
};
node *enque(node *head, char data, int priority)
{
	node *new_node = (node *)malloc(sizeof(node));
	new_node->data = data;
	new_node->priority = priority;

	if (head == NULL || head->priority < priority)
	{
		new_node->next = head;
		return new_node;
	}
	else
	{
		node *temp = head;
		while (temp->next != NULL)
		{
			node *t = temp;
			temp = temp->next;
			if (temp->priority < priority)
			{
				new_node->next = temp;
				t->next = new_node;
				return head;
			}
		}
		new_node->next = temp->next;
		temp->next = new_node;
		return head;
	}
}
char dequeue(node **head)
{
	if ((*head) != NULL)
	{
		char ch = (*head)->data;
		node *t = (*head);
		(*head) = (*head)->next;
		free(t);
		return ch;
	}
	else
		return -1;
}
int main()
{
	node *head = NULL;
	cout << "Enter the number of character you want to enter : ";
	int n;
	char data;
	int priority;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << endl
			 << i << ".  Enter character and it's priority : ";
		cin >> data >> priority;
		head = enque(head, data, priority);
	}
	cout << endl
		 << "how many character you want to deque : ";
	cin >> n;
	cout << " dequeued character in decreasing order : " << endl;
	for (int i = 1; i <= n; i++)
	{
		char c = dequeue(&head);
		if (c != -1)
		{
			cout << endl
				 << i << ". " << c;
		}
		else
			break;
	}
}
