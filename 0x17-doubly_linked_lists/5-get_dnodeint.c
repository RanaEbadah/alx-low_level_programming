#include "lists.h"

/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
*@head: the head
*@index: the index of the node, starting from 0
*Return: the dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int indexCounter = 0;

	if (head == NULL)
	return (NULL);

	temp = head;

	while (temp->next != NULL)
	{
		indexCounter++;
		temp = temp->next;
		if (indexCounter == index)
		{
			return (temp);
		}
	}

	return (NULL);





}
