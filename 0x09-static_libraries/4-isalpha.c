#include "main.h"

/**
 *_isalpha - checks if it is letter or not.
 *@c: The character to check
 *Return: 1 if letter
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
