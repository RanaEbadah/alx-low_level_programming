#include "lists.h"

/**
*sum_dlistint - returns the sum of all the data
*(n) of a dlistint_t linked list
*@head: the head
*Return: the summation result
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int sum = 0;

	if (head == NULL)
	return (0);

	temp = head;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	sum += temp->n;
	return (sum);

}
