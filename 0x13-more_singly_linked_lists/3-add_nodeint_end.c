#include "lists.h"

/**
*add_nodeint_end - add a new node at the end of listint_t
*@head: pointer to pointer to listint_t struct
*@n: the value of n in the new node
*Return: pointer to the allocated node.
*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	return (newNode);

}
