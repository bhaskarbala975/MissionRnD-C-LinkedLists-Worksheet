/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>

struct node {
	int num;
	struct node *next;
};
struct node* insertfront(struct node*, int);
struct node* insert(struct node*, int);
struct node * numberToLinkedList(int N) 
{
	int a[100], temp = 0,i=0,j=0;
	struct node* first;
	first = NULL;
	if (N < 0)
	{
		N = N*-1;
	}
	if (N == 0)
	{
		first = insert(first, N);
		return first;
	}
	if (N > 0)
	{
		while (N != 0)
		{
			temp = N % 10;
			a[i] = temp;
			N = N / 10;
			i++;
		}

		for (j = 0; j < i; j++)
		{
			first = insertfront(first, a[j]);
		}

		return first;
	}
}
struct node* insertfront(struct node* first, int i)
{
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->num = i;
	p->next = first;
	first = p;
	return first;
}
struct node* insert(struct node* first, int i)
{
	struct node* p;
	p = (struct node*)malloc(sizeof(struct node));
	p->num = i;
	p->next = first;
	first = p;
	return first;

}