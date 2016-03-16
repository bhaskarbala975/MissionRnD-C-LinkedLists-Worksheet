/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node 
{
	int num;
	struct node *next;
};
struct node* removeEveryKthNode(struct node *head, int K) 
{
	int count;
	struct node* t = head;
	if (head == NULL || K <= 1) 
	{
		return NULL;
	}
	
else 
{
	label:
	    count = 1;
    	while (count < K-1 && t != NULL)
		{
				count++;
				t = t->next;
		}
		if (t == NULL)
		return head;
		else 
		{
			if (t->next != NULL)
			t->next = t->next->next;
			t = t->next;
		}
	}
	while (t != NULL)
		goto label;
	return head;
}








	