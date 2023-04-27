#include "main.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *Return: void
 *
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j <= 10; j++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (k = 10; k <= 14; k++)
		{
			_putchar('1');
			_putchar((k % 10) + 48);
		}

		_putchar('\n');
	}
}
