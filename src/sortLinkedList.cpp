/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
int count(struct node* head);

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head)
{
	int n = 0, i = 0, t;
	struct node* t1;
	struct node* t2;
	if (head==NULL)
	return NULL;
	n = count(head);
	if (n == 1)
		return head;
	else
	{
		while (i <= (n - 1))
		{
			t1 = head;
			t2 = head->next;
			while (t2 != NULL)
			{
				if ((t1->num) > (t2->num))
				{
					t = t1->num;
					t1->num = t2->num;
					t2->num = t;
				}
				t1 = t1->next;
				t2 = t2->next;
			}
			i++;
		}
		return head;
	}
}
int count(struct node* head)
{
	if (head == NULL)
		return 0;
	else
		return (1 + count(head->next));
}