#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index.
* @head: the head
* @index: the index.
* Return: 1 or -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	dlistint_t *temp2 = NULL;
	unsigned int indexCounter = 0;

	if (head == NULL)
	return (-1);
	temp = *head;
	if (index == 0)
	{
		/*delete first node*/
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(temp);
		temp = NULL;
		return (1);
	}
	else
	{
		while (indexCounter < index)
		{
			if (temp->next == NULL)
			return (-1);
			temp = temp->next;
			indexCounter++;
		}
		if (temp->next == NULL)
		return (deleteLast(temp));
		else
		{
			temp2 = temp->prev;
			temp2->next = temp->next;
			temp->next->prev = temp2;
			free(temp);
			temp = NULL;
			return (1);
		}
	}
}

/**
* deleteLast - deletes last node.
* @temp: the node to be deleted
* Return: 1 or -1
*/
int deleteLast(dlistint_t *temp)
{
	temp->prev->next = NULL;
	free(temp);
	temp = NULL;
	return (1);
}
