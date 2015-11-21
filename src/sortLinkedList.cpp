/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	if (head == NULL)
		return NULL;
	struct node *temp = head;
	struct node *temp2 = head->next;
	struct node *result = head;
	int number;
	while (temp)
	{
		temp2 = temp->next;
		while (temp2)
		{
			if (temp2->num < temp->num)
			{
				
				temp->num = temp->num+temp2->num;
				temp2->num = temp->num - temp2->num;
				temp->num = temp->num - temp2->num;
			}
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	return result;
}