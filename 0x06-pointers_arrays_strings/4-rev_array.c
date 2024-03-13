#include "main.h"

/**
 *reverse_array - reverse array of ints.
 *@a: int array.
 *@n: number of elements of the array.
 *Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int temp = 0;
	int i = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
