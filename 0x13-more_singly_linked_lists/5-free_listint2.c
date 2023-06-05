#include "lists.h"

/**
*free_listint2 - free listint_t
*@head: pointer to pointer to listint_t struct
*Return: void
*
*/
void free_listint2(listint_t **head)
{
	listint_t *node = NULL;

	if (head == NULL)
	return;

	while (*head)
	{
		node = ((*head)->next);
		free(*head);
		*head = node;
	}

	*head = NULL;

}
