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

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) 
{
	int totcount = 0, temp = 0, i = 0, c = 0;
	struct node* t;
	struct node* pre;
	struct node* t1;
	if (K <= 1)
		return NULL;
	else if (head == NULL)
		return NULL;
	else
	{
		t = head;
		temp = K;
		t1 = head;
		if (K > totcount)
			return head;
		if (K < totcount)
		{
			for (i = 0; i < totcount; i++)
			{
				if (temp == i&&temp < totcount)
				{
					while (t1 != NULL&&c == K)
					{
						pre = t1;
						t1 = t1->next;
					}
					pre->next = t->next;
					free(t);
					t = t->next;
					temp = temp + K;
				}
				else if (K < totcount)
					t = t->next;
				else
					break;
			}

		}
		return head;
	}

	
	
	

}