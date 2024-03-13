#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*assign - assign values to pointer.
*@newPtr: The new pointer.
*@ptr: The old pointer.
*@new_size: The new size
*@old_size: The old size
*Return: void
*
*/

void assign(void *newPtr, void *ptr,
unsigned int new_size, unsigned int  old_size)
{
	int *a, *b;
	unsigned int limit, i;

	if (new_size > old_size)
	limit = old_size;
	else
	limit = new_size;

	a = (int *) newPtr;
	b = (int *) ptr;
	for (i = 0; i < limit; i++)
	{
		a[i] = b[i];
	}

}

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

	if (new_size == old_size)
	return (ptr);

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

	assign(newPtr, ptr, new_size, old_size);

	free(ptr);

	return (newPtr);
}
