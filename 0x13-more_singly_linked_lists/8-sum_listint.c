#include "lists.h"

/**
*sum_listint - returns the sum of all the data (n) of a listint_t linked list.
*@head: pointer to listint_t struct.
*Return: the summation result.
*
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
	return (0);

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
