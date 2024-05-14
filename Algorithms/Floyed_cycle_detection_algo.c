#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
	int data;
	struct node *next;
} node;
void insert_at_end(node **head, int data)
{
	node *temp = (node *)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	if ((*head) == NULL)
		(*head) = temp;
	else
	{
		node *ptr = (*head);
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}
}
void Make_cycle(node *ptr, int pos)
{
	node *temp = 0;
	while (ptr->next != NULL)
	{
		pos--;
		if (pos == 0)
			temp = ptr;
		ptr = ptr->next;
	}
	ptr->next = temp;
}

void Display(node *ptr)
{
	while (ptr != 0)
	{
		printf("%d  ", ptr->data);
		ptr = ptr->next;
	}
}

void erase_cycle(node *ptr)
{
	node *slow = ptr, *fast = ptr;
	while (fast != 0 && fast->next != 0)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			fast = ptr;
			while (fast->next != slow->next)
			{
				fast = fast->next;
				slow = slow->next;
			}
			slow->next = NULL;
			break;
		}
	}
}

bool detect_cycle(node *head)
{
	node *slow = head, *fast = head;
	while (fast != 0 && fast->next != 0)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return true;
	}
	return false;
}

int main()
{
	node *head = NULL;
	insert_at_end(&head, 1);
	insert_at_end(&head, 3);
	insert_at_end(&head, 4);
	//	insert_at_end(&head,34);
	//	insert_at_end(&head,16);
	//	insert_at_end(&head,6);
	printf("%d\n", detect_cycle(head));
	Display(head);
	Make_cycle(head, 2);
	printf("%d\n", detect_cycle(head));
	erase_cycle(head);
	printf("%d\n", detect_cycle(head));
	Display(head);
	//
	//	5
	// 7 58 36 34 16
}
