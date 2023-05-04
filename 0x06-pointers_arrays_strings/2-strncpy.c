#include "main.h"

/**
 *_strncpy - copy strings.
 *@dest: a pointer to first string.
 *@src: a pointer to the second string.
 *@n: an int.
 *Return: pointer to the concatenating string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int iSrc = 0;
	int jDest = 0;
	int c = 0;


	while ((src[iSrc] != '\0') && (iSrc < n))
	{
		iSrc++;
	}

	for (jDest = 0; jDest < iSrc ; jDest++)
	{
		dest[jDest] = src[jDest];
	}


	if (iSrc < n)
	{
		c = n - iSrc;
		while (c > 0)
		{
			dest[jDest] = '\0';
			jDest++;
			c--;
		}

	}

	return (dest);

}
