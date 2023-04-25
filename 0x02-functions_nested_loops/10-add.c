#include "main.h"
/**
 *print - printsint using _putchar
 *@n: the number that will be print
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
 *add - add two integers
 *@x: The first int.
 *@y: The second int
 *Return: The result
 *
 */

int add(int x, int y)
{
	int result;

	result = x + y;
	print(result);
	return (result);

}
