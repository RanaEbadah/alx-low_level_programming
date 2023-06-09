#include "lists.h"

/**
*add_node -  adds a new node at the beginning of a list_t list.
*@head: pointer to head pointer
*@str: string
*Return: pointer to the new node
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int strLength = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	return (NULL);

	while (str[strLength] != '\0')
	strLength++;


	newNode->str = strdup(str);
	newNode->len = strLength;
	newNode->next = (*head);
	*head = newNode;

	return (newNode);

}
