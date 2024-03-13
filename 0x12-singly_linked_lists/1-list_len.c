#include "lists.h"

/**
*list_len - returns the number of elements in a linked list_t list.
*@h: pointer to list_t struct
*Return: the number of nodes.
*
*/
size_t list_len(const list_t *h)
{
	size_t nodesCount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodesCount++;
	}

	return (nodesCount);
}
