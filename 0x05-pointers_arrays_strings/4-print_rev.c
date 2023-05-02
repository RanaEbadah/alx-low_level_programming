#include "main.h"
/**
 *print_rev - t prints a string to stdout in reverse.
 *@s: a pointer to string.
 *Return: void.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j;
	char *arr;

	arr = s;

	while (arr[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0 ; j--)
	{
		_putchar(arr[j]);
	}
	_putchar('\n');

}
