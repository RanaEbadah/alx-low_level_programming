#include "main.h"

/**
 *cap_string - convert lowercase letters of a string to uppercase.
 *@str: string input.
 *Return: pointer to string.
 *
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	int separators[] = {32, 8, 9, 10, 46, 44, 59, 33, 63, 34, 40, 41, 123, 125};

	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			for (j = 0; j <= 13; j++)
			{
				if (i > 0)
				{
					if (str[i - 1] == separators[j])
					{
						str[i] = str[i] - 32;
						break;
					}
				}
			}
		}
		i++;
	}

	return (str);

}
