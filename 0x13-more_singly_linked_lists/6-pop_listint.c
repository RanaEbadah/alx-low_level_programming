#include "lists.h"

/**
*pop_listint - deletes the head node of a listint_t linked list,
*and returns the head node’s data (n).
*@head: pointer to pointer to listint_t struct
*Return: int
*
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *newFirstNode;

	if (*head == NULL)
	return (0);

	n = (*head)->n;
	newFirstNode = (*head)->next;
	free(*head);

	*head = newFirstNode;

	return (n);
}
