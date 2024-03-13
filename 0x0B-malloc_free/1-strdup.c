#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*_strdup -  returns a pointer to a newly allocated space in memory.
*@str: the string needed to allocate.
*Return: pointer to the string
*
*/
char *_strdup(char *str)
{
	int i = 0, strSize = 0;
	char *p;

	if (str == NULL)
	return (NULL);

	while (str[strSize] != '\0')
	{
		strSize++;
	}

	p = (char *)malloc((strSize * sizeof(char)) + 1);

	if (p == NULL)
	return (NULL);

	for (i = 0; i < strSize; i++)
	{
		p[i] = str[i];
	}

	return (p);
}
