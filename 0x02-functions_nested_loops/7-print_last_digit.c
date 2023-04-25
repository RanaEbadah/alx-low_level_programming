#include "main.h"

/**
 *print_last_digit - prints the last digit.
 *@c: The integer that we will print its last digit
 *Return: The last digit
 *
 */

int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar((c % 10) + 48);
	return (c % 10);
}
