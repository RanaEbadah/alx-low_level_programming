#include "main.h"

/**
*_memcpy - copy two strings
*@dest: The destination
*@src: The source
*@n: int
*Return: the resulted string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	size_t i;
	char *dest_ptr = (char *) dest;
	const char *src_ptr = (const char *) src;

	for (i = 0; i < n; i++)
	{
		dest_ptr[i] = src_ptr[i];
	}

	return (dest);
}

/**
*_strchr - search for a character in a string
*@c: The character to search for
*@s: The string to search in
*Return: pointer to the first occurence of the char.
*/
char *_strchr(char *s, char c)
{
	const char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			return ((char *) p);
		}
		p++;
	}
	if (c == '\0')
	{
		return ((char *) p);
	}
	else
	{
		return (NULL);
	}
}

/**
* _strspn - checks if s exist in accept
*@s: The destination
*@accept: The source
* Return: int
*/
unsigned int _strspn(char *s, char *accept)
{
	size_t count = 0;
	int found;

	while (*s)
	{
		found = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}

			accept++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}

/**
* _strpbrk - concatenate two strings
*@s: The destination
*@accept: The source
* Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		const char *ptr = accept;

		while (*ptr)
		{
			if (*ptr == *s)
			{
				return ((char *)s);
			}

			ptr++;
		}

		s++;
	}

	return (NULL);
}

/**
* _strstr - concatenate two strings
*@haystack: The destination
*@needle: The source
* Return: the resulted string
*/
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}

	while (*haystack)
	{
		const char *ptr1 = haystack;
		const char *ptr2 = needle;

		while (*ptr1 && *ptr2 && *ptr1 == *ptr2)
		{
			ptr1++;
			ptr2++;
		}

		if (*ptr2 == '\0')
		{
			return ((char *)haystack);
		}

		haystack++;
	}
	return (NULL);
}
