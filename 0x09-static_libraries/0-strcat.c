#include "main.h"

/**
 *_strcat - concatenates two strings.
 *@dest: a pointer to first string.
 *@src: a pointer to the second string.
 *Return: pointer to the concatenating string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
