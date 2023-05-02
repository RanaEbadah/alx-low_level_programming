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
	

	for (j = i; j >= 0; j++)
	{
		_putchar(arr[j - 1]);

	}
	_putchar('\n');
}
