#include "main.h"

/**
 * leet- encodes a string into 1337.
 *@str: string input.
 *Return: pointer to string.
 *
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	int arr[] = {79, 76, 0, 69, 65, 0, 0, 84};

	while ((str[i] != '\0'))
	{
		for (j = 0; j < 8; j++)
		{
			if ((arr[j] != 0) && ((str[i] == arr[j]) || (str[i] == (arr[j] + 32))))
			{
				str[i] = j + 48;
			}
		}
		i++;
	}

	return (str);

}
