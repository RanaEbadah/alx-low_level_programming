#include "lists.h"

/**
*insert_nodeint_at_index - inserts a new node at a given position.
*@head: pointer to pointer to listint_t struct.
*@idx: The index of the inserted node
*@n: the value of n.
*Return: listint_t pointer
*
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
	return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	return (NULL);

	newNode->n = n;
	temp = *head;
	if (idx == 0)
	{
		newNode->next = (*head)->next;
		(*head)->next = newNode;
	}
	else
	{
		while (i < idx)
		{
			if (i == (idx - 1))
			{
				newNode->next = temp->next;
				temp->next = newNode;
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (newNode);
}
