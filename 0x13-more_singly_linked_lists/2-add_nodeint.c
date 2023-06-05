#include "lists.h"

/**
*add_nodeint - add a new node at the begining of listint_t
*@head: pointer to pointer to listint_t struct
*@n: the value of n in the new node
*Return: pointer to the allocated node.
*
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
