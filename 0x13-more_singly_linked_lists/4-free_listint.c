#include "lists.h"

/**
*free_listint - free listint_t
*@head: pointer to listint_t struct
*Return: void
*
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->next);
		free(head);
		head = temp;
	}
}
