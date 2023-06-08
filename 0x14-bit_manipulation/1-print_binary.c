#include "main.h"

/**
*print_binary - prints the binary representation of a number.
*@n: the int
*Return: void
*
*/
void print_binary(unsigned long int n)
{
	int i, printed = 0;
	int checker;

	checker = (sizeof(int) * 8) - 1;
	for (i = checker; i >= 0; i--)
	{
		if (n & (1 << i))
		{
			printed = 1;
			_putchar('1');
		}
		else
		{
			if (printed)
			_putchar('0');
		}
	}
	if (!printed)
	_putchar('0');

}
