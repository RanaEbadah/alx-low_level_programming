#include "main.h"

/**
 *_islower - check the lowercase letters.
 *@c: The character to check
 *Return: 1 if lower case
 * 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
