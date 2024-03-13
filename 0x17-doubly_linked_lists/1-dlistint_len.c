#include "lists.h"

/**
 * dlistint_len -  prints the number of the list elements
 * @h: the list
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t nodesCounter = 0;

	if (h == NULL)
	return (0);
	else
	{
		temp = h;
		if (temp->next != NULL)
		{
			nodesCounter++;
			temp = temp->next;
		}
		nodesCounter++;

		return (nodesCounter);
	}
}
