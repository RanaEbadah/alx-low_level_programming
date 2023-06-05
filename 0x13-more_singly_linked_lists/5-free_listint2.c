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
	listint_t *head1 = *head;

	while (head1 != NULL)
	{
		head1 = head1->next;
		free(head1);
		head1 = node;
	}

	*head = NULL;
	head = NULL;

}
