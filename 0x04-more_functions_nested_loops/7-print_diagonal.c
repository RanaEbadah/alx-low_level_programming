#include "main.h"

/**
*print_diagonal - draws a diagonal line on the terminal.
*@n: number
*Return: void
*
*/

void print_diagonal(int n)
{
	int row, column, count;

	count = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = n; row >= 1; row--)
		{
			for (column = 0; column < n; column++)
			{
				count = column + row;
				if (count == n)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}

			}
			_putchar('\n');
		}

	}
}
