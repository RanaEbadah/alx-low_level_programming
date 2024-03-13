#include "main.h"

/**
*get_bit - returns the value of a bit at a given index.
*@n: the int
*@index: the index
*Return: void
*
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int checker;
	int result;

	if (index > 31)
	return (-1);

	checker = 1 << index;
	result = (checker & n) != 0;
	return (result);

}
