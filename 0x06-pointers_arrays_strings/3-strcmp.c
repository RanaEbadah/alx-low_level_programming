#include "main.h"

/**
 *_strcmp - compare strings.
 *@s1: a pointer to first string.
 *@s2: a pointer to the second string.
 *Return: int
 *
 */

int _strcmp(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int nInt = 0;
	int i = 0;

	while (s1[s1length] != '\0')
	{
		s1length++;
	}
	while (s2[s2length] != '\0')
	{
		s2length++;
	}
	if (s1length > s2length)
	{
		nInt = s1length - s2length;
	}
	else if (s1length < s2length)
	{
		nInt = s1length - s2length;
	}
	else
	{
		for (i = 0; i < s1length; i++)
		{
			if (s1[i] == s2[i])
			continue;
			else
			{
				nInt = s1[i] - s2[i] ;
				break;
			}
		}
	}
	return (nInt);

}
