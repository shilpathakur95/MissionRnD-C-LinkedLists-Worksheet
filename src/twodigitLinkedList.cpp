/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>
int power(int a, int b);
struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head){
	struct node *temp = head;
	int num_of_nodes = 0, result=0;
	while (temp)
	{
		num_of_nodes++;
		temp = temp->next;
	}
	num_of_nodes = num_of_nodes * 2- 1;
	temp = head;
	while (temp)
	{
		result =result+ temp->digit1*power(10, num_of_nodes) + temp->digit2*power(10,num_of_nodes-1);
		num_of_nodes = num_of_nodes -2;
		temp = temp->next;
	}
	return result;
}
int power(int a, int b)
{
	int iterator;
	int pow = 1;
	for (iterator = 1; iterator <= b; iterator++)
	{
		pow = pow*a;
	}
	return pow;
}
