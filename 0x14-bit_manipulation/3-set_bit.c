#include "main.h"

/**
*set_bit - sets the value of a bit to 1 at a given index.
*@n: the int
*@index: the index
*Return: 1 if it worked, or -1 if an error occurred
*
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int checker;

	if (index > 31)
	return (-1);

	checker = 1 << index;

	*n = *n | checker;

	return (1);
}
