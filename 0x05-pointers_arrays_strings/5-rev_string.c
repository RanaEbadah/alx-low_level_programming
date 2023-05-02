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

	arr = s;
	while (arr[i])
	{
		i++;
	}

	printf("%d\n", i);

}
