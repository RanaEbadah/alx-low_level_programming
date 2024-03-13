#include "main.h"

/**
 *string_toupper - convert all lowercase letters of a string to uppercase.
 *@str: string input.
 *Return: pointer to string.
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		str[i] = str[i] - 32;

		i++;
	}

	return (str);

}
