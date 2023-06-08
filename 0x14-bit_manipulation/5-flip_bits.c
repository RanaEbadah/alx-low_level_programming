#include "main.h"

/**
*flip_bits - returns the number of bits you would
*need to flip to get from one number to another.
*@n: the first int
*@m: the second int
*Return: the number of bits
*
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult;
	unsigned int counter = 0;


	xorResult = n ^ m;
	while (xorResult != 0)
	{
		counter = counter + (xorResult & 1);
		xorResult = xorResult >> 1;
	}

	return (counter);
}
