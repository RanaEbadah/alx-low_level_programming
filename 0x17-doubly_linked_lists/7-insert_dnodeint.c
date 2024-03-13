#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: the head
* @n: the data
* @idx: the index.
* Return: dlistint_t
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL;
	dlistint_t *temp = NULL;
	unsigned int indexCounter = 0;


	if (*h == NULL)
	return (NULL);

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	temp = *h;
	while (temp->next != NULL)
	{
		if (indexCounter == idx - 1)
		{
			return (insertNodeAtN(node, temp));
		}
		else
		{
			temp = temp->next;
			indexCounter++;
		}
	}

	if (indexCounter == idx - 1)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}


/**
* insertNodeAtN - inserts a new node
* @node: the node to be inserted.
* @prevNode: the previous node.
* Return: dlistint_t
*/
dlistint_t *insertNodeAtN(dlistint_t *node, dlistint_t *prevNode)
{
	if ((node == NULL) || (prevNode == NULL))
	return (NULL);

	node->next = prevNode->next;
	node->prev = prevNode;
	prevNode->next = node;

	return (node);

}
