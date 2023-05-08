#include "main.h"

/**
 *_strchr - locates a character in a string.
 *@s: the source.
 *@c: the char.
 *Return: pointer to the memory area s
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *result = '\0';

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = s + i;
			break;
		}
		i++;
	}
	return (result);


}
