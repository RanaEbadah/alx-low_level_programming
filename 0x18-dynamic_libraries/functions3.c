#include "main.h"

/**
* _strcat - concatenate two strings
*@dest: The destination
*@src: The source
* Return: the resulted string
*/
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (originalDest);
}

/**
* _strncat - concatenate n chars from two strings
*@dest: The destination
*@src: The source
*@n: the number of chars
* Return: the resulted string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (originalDest);
}

/**
* _strncpy - copy
*@dest: The destination
*@src: The source
*@n: the number of chars
*Return: the resulted string
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (originalDest);
}

/**
* _strcmp - compare two strings
*@s1: The destination
*@s2: The source
*Return: int
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
* _memset - compare two strings
*@s: The destination
*@b: The source
*@n: the number of chars
*Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	size_t i;
	unsigned char *bytePtr = (unsigned char *)s;
	unsigned char byteValue = (unsigned char)b;

	for (i = 0; i < n; i++)
	{
		*bytePtr = byteValue;
		bytePtr++;
	}

	return (s);
}
