#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: number
*Return: void
*
*/

void print_diagonal(int n)
{
	int row, column;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{

			for (column = 1; column <= row; column++)
			{
				_putchar(' ');

			}
			_putchar(92);
			_putchar('\n');
		}

	}
}
