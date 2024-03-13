#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*string_nconcat - concatenates two strings.
*@s1: first string
*@s2: second string
*@n: number of letters
*Return: pointer
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1Length = 0, s2Length = 0, i, j;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[s1Length] != '\0')
		s1Length++;
	while (s2[s2Length] != '\0')
		s2Length++;
	if (n > s2Length)
	n = s2Length;
	p = (char *)malloc(s1Length + n + 1);
	if (p == NULL)
	return (NULL);
	for (i = 0; i < s1Length; i++)
	{
		p[i] = s1[i];
	}
	j = 0;
	for (; i < s1Length + n && j < n; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[i] = '\0';
	return (p);
}
