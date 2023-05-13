#include "main.h"

/**
 *_isupper - checks for uppercase character.
 *@c: The character that will be checked
 *Return: 1 if capital, 0 if small
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
