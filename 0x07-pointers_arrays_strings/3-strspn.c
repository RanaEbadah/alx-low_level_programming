#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: the source.
 *@accept: the char.
 *Return: int
 */

unsigned int _strspn(char *s, char *accept)
{

	int i = 0;
	int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32)
		{
			printf("space is here\n");
			break;
		}

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				printf("count equal %d\n", count);
				continue;
			}

			j++;
			printf("j equal %d\n", j);

		}
		printf("i equal %d\n", i);
		i++;
	}

	return (count);

}
