#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: the source.
 *@accept: the char.
 *Return: int
 */

unsigned int _strspn(char *s, char *accept)
{

	int i;
	int j;
	unsigned int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 32)
		{
			break;
		}

		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}

			j++;

		}

		i++;
	}

	return (count);

}
