#include "main.h"
/**
 *_strlen - returns the length of a string.
 *@s: a pointer to string.
 *Return: integer.
 *
 */
int _strlen(char *s)
{
	int i = 0;
	int length = 0;
	char arr[] = *s;

	while (s[i])
	{
		length++;
		i++;
	}

	return (length);
}
