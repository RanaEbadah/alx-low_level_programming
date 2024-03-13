#include "lists.h"

/**
* add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
* @head: the head
* @n: the data
* Return: dlistint_t
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	return (NULL);
	else
	{
		temp->n = n;
		temp->prev = NULL;

		if (*head == NULL)
		temp->next = NULL;
		else
		{
			temp->next = *head;
			(*head)->prev = temp;
		}

		*head = temp;

	}

	return (temp);
}
