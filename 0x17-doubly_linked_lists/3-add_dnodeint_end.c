#include "lists.h"

/**
* add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
* @head: the head
* @n: the data
* Return: dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *tp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	return (NULL);
	else
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;

		if (*head == NULL)
		{
			*head = temp;
			return (*head);
		}
		tp = *head;

		while (tp->next != NULL)
		tp = tp->next;

		tp->next = temp;
		temp->prev = tp;

		return (temp);

	}
}
