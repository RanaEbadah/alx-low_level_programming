#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main - a prgram that gets a random number
* and print if it positive or negative or zero
* Return: 0 always zero
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%i is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%i is negative\n", i);
	}
	else
	{
		printf("%i is zero\n", i);
	}
}
