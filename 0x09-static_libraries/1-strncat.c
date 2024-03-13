#include "main.h"

/**
 *_strncat - concatenates two strings.
 *@dest: a pointer to first string.
 *@src: a pointer to the second string.
 *@n: an int.
 *Return: pointer to the concatenating string
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while ((n > 0) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	dest[i] = '\0';

	return (dest);
}
