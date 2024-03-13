#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* _islower - check if the letter is lowercase or not
* @c: The character
* Return: yes 1 -- no 1
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	return (0);
}

/**
* _isalpha - check if the letter is alphabet or not
* @c: The character
* Return: yes 1 -- no 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);

	return (0);
}

/**
* _abs - get the abs of an int
* @n: The int
* Return: abs value of n
*/
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

/**
* _isupper - check if the char is upper
* @c: The int
* Return: yes 1 and 0 no
*/
int _isupper(int c)
{
	if (c > 0)
	return (1);
	else
	return (0);
}
