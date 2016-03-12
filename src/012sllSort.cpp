/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
	int a[100], i = 0, n = 0, j = 0, b;
	struct node* t;
	t = head;
	while (t != NULL)
	{
		a[n] = t->data;
		t = t->next;
		n++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			if (a[j] >a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	i = 0;
	t = head;
	while (t != NULL)
	{
		t->data = a[i];
		t = t->next;
		i++;
	}
}