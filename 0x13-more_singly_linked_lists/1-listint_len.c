#include "lists.h"

/**
*listint_len - returns the number of elements in a linked listint_t list.
*@h: pointer to listint_t struct
*Return: the number of nodes.
*
*/
size_t listint_len(const listint_t *h)
{
	size_t nodeCounter = 0;

	while (h != NULL)
	{
		nodeCounter++;
		h = h->next;
	}

	return (nodeCounter);
}
