#include "function_pointers.h"

/**
*int_index -   function that searches for an integer
*as a parameter on each element of an array.
*@array: array of int
*@size: size of array
*@cmp:  is a pointer to the function to be used to compare values
*Return: int
*
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);

	if ((array != NULL) && (cmp != NULL))
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}

		return (-1);
	}

	return (-1);
}
