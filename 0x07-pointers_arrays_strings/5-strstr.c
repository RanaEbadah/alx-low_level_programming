#include "main.h"

/**
 *_strstr -  searches a string .
 *@haystack: the source.
 *@needle: the string.
 *Return: pointer to char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int done = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		if (haystack[i] == needle[0])
		{
			done = i;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					done = 0;
					break;
				}

				j++;
			}

			if (done != 0)
			{
				return (haystack + done);
			}

		}

		i++;
	}


	return (0);

}
