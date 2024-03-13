#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: the list
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = NULL;
	size_t nodesCounter = 0;

	if (h == NULL)
	return (0);
	else
	{
		temp = h;

		while (temp->next != NULL)
		{
			printf("%d\n", temp->n);
			nodesCounter++;
			temp = temp->next;
		}
		printf("%d\n", temp->n);
		nodesCounter++;

		return (nodesCounter);
	}
}
