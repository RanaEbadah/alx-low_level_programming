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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = n; row >= 1; row--)
		{
			count = 0;

			for (column = 0; column < n; column++)
			{
				count = column + row;
				if (count == n)
				{
					_putchar(92);
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
