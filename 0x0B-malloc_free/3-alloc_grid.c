#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*alloc_grid - return a pointer to a 2 dimensional array of integers.
*@width: int the width
*@height: the string needed to allocate.
*Return: pointer to the int 2D array
*
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (height <= 0 || width <= 0)
	return (NULL);

	p = (int **)malloc(height * sizeof(int *));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height ; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[j][i] = 0;
		}
	}

	return (p);
}
