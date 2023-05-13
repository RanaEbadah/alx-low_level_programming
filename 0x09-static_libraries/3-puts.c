#include "main.h"
/**
 *_puts - t prints a string to stdout.
 *@str: a pointer to string.
 *Return: void.
 *
 */

void _puts(char *str)
{
	int i = 0;
	char *arr;

	arr = str;

	while (arr[i])
	{
		_putchar(arr[i]);
		i++;
	}
	_putchar('\n');

}
