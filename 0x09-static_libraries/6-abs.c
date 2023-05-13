#include "main.h"
#include<stdio.h>

/**
 *_abs - calculate absolute value of an int
 *@n: int.
 *Return: Tha absolute value of n.
 *
 */

int _abs(int n)
{
	if (n < 0)
	n = n * -1;

	return (n);
}
