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

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) 
{
	struct node *head;
	struct node *temp;
	head = (struct node *)malloc(sizeof(struct node));
	temp = (struct node *)malloc(sizeof(struct node));
	head = NULL;
	int A[10];
	int iterator=0,iterator2;
	if (N < 0)
		N = N*-1;
	else if (N == 0)
	{
		temp->num = 0;
		temp->next = NULL;
		return temp;
	}
	while (N > 0)
	{
		A[iterator] = N % 10;
		N = N / 10;
		iterator++;
	}
	for (iterator2 = 0; iterator2<iterator; iterator2++)
	{
		temp = (struct node *)malloc(sizeof(struct node));
		temp->num = A[iterator2];
		temp->next = head;
		head = temp;
	}
	return  temp;
}