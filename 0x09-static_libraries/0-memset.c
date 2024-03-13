#include "main.h"
/**
 * _memset - function fills the first n bytes of mem
 * @s : pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to memory area @s
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
