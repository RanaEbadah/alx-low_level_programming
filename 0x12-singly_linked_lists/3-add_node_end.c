#include "lists.h"

/**
*add_node_end -  adds a new node at the end of a list_t list.
*@head: pointer to head pointer
*@str: string
*Return: pointer to the new node
*
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int strLength = 0;

	while (str[strLength] != '\0')
	strLength++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);

	newNode->str = strdup(str);
	newNode->len = strLength;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;

	while ((temp->next) != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	return (newNode);
}
