#include "main.h"
/**
 *puts2 - prints every other character of a string.
 *@str: a pointer to string.
 *Return: void.
 *
 */
void puts2(char *str)
{
	int i = 0;
	char *arr;

	arr = str;

	while (arr[i])
	{
		if (i % 2 == 0)
		{
			_putchar(arr[i]);
		}

		i++;
	}
	_putchar('\n');


}
