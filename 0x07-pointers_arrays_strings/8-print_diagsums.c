#include "main.h"
#include<stdio.h>

/**
 *print_diagsums - prints the sum of the two
 *diagonals of a square matrix of integers.
 *@a: pointer to * int array.
 *@size: size of the array
 *Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[(i * size) + i];

		sum2 = sum2 + a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
