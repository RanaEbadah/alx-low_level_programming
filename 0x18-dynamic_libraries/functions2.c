#include "main.h"

/**
* _isdigit - check if the int is digit
* @c: The int
* Return: yes 1 and 0 no
*/
int _isdigit(int c)
{
	if (c > 0)
	return (1);
	else
	return (0);
}

/**
* _strlen - get the length of a text
* @s: The string
* Return: the length
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
* _puts - print string
* @s: The string
* Return: void
*/
void _puts(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}
	_putchar('\n');
}

/**
* _strcpy - copy text
*@dest: The destination
*@src: The source
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

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
* _atoi - convert string to int
* @s: The string
* Return: int
*/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
		else
		{
			break;
		}
	}

	return (sign * result);
}
