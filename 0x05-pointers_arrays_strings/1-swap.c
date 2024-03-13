#include "main.h"
/**
 *swap_int - swaps the value pf two integers.
 *@a: a pointer to first integer.
 *@b: a pointer to the second integer.
 *Return: void
 *
 */

void swap_int(int *a, int *b)
{
	int a1, b1;

	a1 = *a;
	b1 = *b;

	*a = b1;
	*b = a1;
}
