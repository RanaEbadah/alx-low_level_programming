#include "main.h"
/**
 *rev_string - revesre a string.
 *@s: a pointer to string.
 *Return: void.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char *arr;
	int j;

	arr = s;
	while (arr[i])
	{
		i++;
	}

	if (i > 0)
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(arr[j]);
		}
	}
	_putchar('\n');

}
