#include "lists.h"

/**
*free_listint - free listint_t
*@head: pointer to listint_t struct
*Return: void
*
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head);
		head = node;
	}

}
