#include "main.h"
/**
 *print - printsint using _putchar
 *@n: the number that will be print
 */

void print(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 * times_table - prints the time table
 */
void times_table(void)
{
	int i, j, result;

	result = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			result = i * j;
			if (j != 0 && result < 10)
			{
				_putchar(' ');
			}
			print(result);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
