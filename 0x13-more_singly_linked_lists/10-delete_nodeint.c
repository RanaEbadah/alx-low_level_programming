#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node at a given position.
*@head: pointer to pointer to listint_t struct.
*@index: The index of the inserted node
*Return: 1 if it succeeded, -1 if it failed
*
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		current = (*head)->next;
		(*head)->next = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (i < index)
		{
			previous = previous->next;
			if (i == index)
			{
				current = previous->next;
				previous->next = current->next;
				free(current);
				current = NULL;
			}
			i++;
		}

	}

	return (1);

}
