#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 *@b: the char that will be written in the memory.
 *@s: a pointer to a char.
 *@n: an unsigned int.
 *Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
