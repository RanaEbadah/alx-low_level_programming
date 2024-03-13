#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*_memset - initialize memory space
*@ptr: pointer
*@c: int
*@num: int
*Return: pointer
*
*/

void *_memset(void *ptr, int c, int num)
{
	char *p = ptr;
	int i;

	for (i = 0; i < num; i++)
	{
		p[i] = c;
	}

	return (ptr);
}

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: first int
*@size: second int
*Return: pointer
*
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
	return (NULL);

	p = _memset(p, 0, nmemb * size);

	return (p);
}
