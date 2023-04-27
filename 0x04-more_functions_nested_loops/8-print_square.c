#include "main.h"

/**
*print_square -  prints a square, followed by a new line
*@size: number of #
*Return: void
*
*/

void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
