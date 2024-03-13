#include "main.h"

/**
 *puts_half - prints half of a string.
 *@str: a pointer to string.
 *Return: void.
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int n = 0;
	char *arr;

	arr = str;
	while (arr[length])
	{
		length++;
	}


	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = ((length - 1) / 2) + 1;
	}


	while (n < length)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
