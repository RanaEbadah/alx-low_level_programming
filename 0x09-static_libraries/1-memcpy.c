#include "main.h"

/**
 *_memcpy -  copies memory area.
 *@dest: the destination memory.
 *@src: the source.
 *@n: an unsigned int.
 *Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}


	return (dest);
}
