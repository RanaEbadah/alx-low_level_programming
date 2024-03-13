#include "main.h"

/**
 *rot13 - encodes a string into rot13.
 *@str: string input.
 *Return: pointer to string.
 *
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
