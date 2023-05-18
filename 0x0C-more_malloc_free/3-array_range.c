#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*array_range - creates an array of integers.
*@min: min int
*@max: max int
*Return: pointer
*
*/

int *array_range(int min, int max)
{
	int *p;
	int size, i, value;

	if (max < min)
	return (NULL);

	size = max - min + 1;

	p = (int *)malloc(size * sizeof(int));

	if (p == NULL)
	return (NULL);

	value = min;
	for (i = 0; i < size; i++)
	{
		p[i] = value;

		if (i != size - 1)
		value++;
	}

	return (p);

}
