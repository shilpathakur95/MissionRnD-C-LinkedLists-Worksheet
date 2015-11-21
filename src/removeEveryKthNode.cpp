/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp = head;
	struct node *previous = head;
	int l = 1;
	if (head == NULL || K <= 0)
		return NULL;
	if (K > 1)
	{
		while (temp)
		{
			if (l%K == 0)
			{
				if (temp->next != NULL)//removing non last element
				{
					previous->next = temp->next;

				}
				else //removing last element
				{
					previous->next = NULL;

				}
			}
			else //if we dont want to remove that positionn increment previous
			{
				if (temp != head)
					previous = previous->next;
			}
			temp = temp->next;
			l = l + 1; //icrementing position 
		}
	}
	else
		return NULL;
	return head;
}