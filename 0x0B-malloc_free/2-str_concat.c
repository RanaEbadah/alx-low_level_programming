#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*str_concat -  returns a pointer to a newly allocated space in memory.
*@s1: the string needed to allocate.
*@s2: the string needed to allocate.
*Return: pointer to the string
*
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, s1Size = 0, s2Size = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[s1Size] != '\0')
	{
		s1Size++;
	}

	while (s2[s2Size] != '\0')
	{
		s2Size++;
	}

	p = (char *) malloc(s1Size + s2Size + 1);

	if (p == NULL)
	return (NULL);

	for (i = 0; i < s1Size; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < s2Size; j++)
	{
		p[i] = s2[j];
		i++;
	}

	p[i] = '\0';
	return (p);

}
