#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - a prgram that gets a random number
* and print if it positive or negative or zero
* Return: 0 always zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	/* your code goes there */
	return (0);
}
