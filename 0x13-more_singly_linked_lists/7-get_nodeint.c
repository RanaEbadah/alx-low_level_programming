#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a listint_t linked list.
*@head: pointer to listint_t struct.
*@index: the number of the node.
*Return: listint_t pointer.
*
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);

	node = head;
	while (i < index)
	{
		node = node->next;
		if (node == NULL)
		return (NULL);
		i++;
	}

	return (node);
}
