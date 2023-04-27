#include "main.h"
#include<stdio.h>

/**
 *main - prints numbers 1 to 100
 *multiples of 3 print Fizz
 *multiples of 5 print Buzz
 *multiples of 3 and 5 print FizzBuzz
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0) && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			 printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}

	return (0);
}
