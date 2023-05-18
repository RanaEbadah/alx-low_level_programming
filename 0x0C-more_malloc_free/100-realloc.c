#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*_realloc - reallocates a memory block using malloc and free
*@ptr: The pointer that will reallocate.
*@old_size: The old size
*@new_size: The new size
*Return: pointer
*
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	int *a, *b;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
		return (NULL);
		else
		return (newPtr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newPtr = malloc(new_size);

	if (newPtr == NULL)
	return (NULL);

	a = (int *) newPtr;
	b = (int *) ptr;
	for (i = 0; i < old_size; i++)
	{
		a[i] = b[i];
	}

	free(ptr);

	return (newPtr);
}
