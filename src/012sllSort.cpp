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
	struct node *temp = head ;
	int iterator,count1=0,count2=0,count=0;
	while (temp)
	{
		switch (temp->data)
		{
		case 0:count++;
			break;
		case 1:count1++;
			break;
		case 2:count2++;
			break;
		}
		temp = temp->next;
	}
	for (iterator = 0; iterator < count;iterator++)
	{
			head->data = 0;
			head = head->next;
	}
	for(iterator = 0; iterator < count1; iterator++)
	{
		head->data = 1;
		head = head->next;
	}
	for (iterator = 0; iterator < count2; iterator++)
	{
			head->data = 2;
			head = head->next;
	}
}