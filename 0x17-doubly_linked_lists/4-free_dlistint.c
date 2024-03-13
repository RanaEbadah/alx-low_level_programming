#include "lists.h"

/**
* free_dlistint -  frees a dlistint_t list.
* @head: the head
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp2;

	if (head == NULL)
	return;
	
	temp = head;
	while (temp->next != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
}
