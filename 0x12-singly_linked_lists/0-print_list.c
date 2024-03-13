#include "lists.h"

/**
*print_list -  prints all the elements of a list_t list.
*@h: pointer to list_t struct
*Return: the number of nodes.
*
*/

size_t print_list(const list_t *h)
{
	size_t nodesCount = 0;

	while (h != NULL)
	{
		printNode(h);
		h = h->next;
		nodesCount++;
	}

	return (nodesCount);

}


/**
*printNode -  print the elements of one node
*@node: pointer to list_t struct
*Return: void.
*
*/
void printNode(const list_t *node)
{
	char *str;
	unsigned int len;

	if ((node->str) == NULL)
	{
		str = "(nil)";
		len = 0;
	}
	else
	{
		str = node->str;
		len = node->len;
	}

	printf("[%u] %s\n", len, str);

}
