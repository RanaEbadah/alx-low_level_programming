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

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
