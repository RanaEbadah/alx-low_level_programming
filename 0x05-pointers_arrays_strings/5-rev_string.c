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
	int j;
	char *arr;
	int m = 0;

	arr = s;
	while (arr[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		*(s + m) = arr[j];
		m++;
	}

}
