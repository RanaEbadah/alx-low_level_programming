#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *@c: The integer that we will compute the absolute value of it
 *Return: the absolute value of the input
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
