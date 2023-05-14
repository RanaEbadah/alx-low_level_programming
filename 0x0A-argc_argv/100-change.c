#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include <ctype.h>

/**
*main - a program that prints the minimum number of coins
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int coinCount = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if ((cents % 25) != cents)
		{
			coinCount = coinCount + (cents / 25);
			if ((cents % 25) == 0)
			{
				printf("%d\n", coinCount);
				return (0);
			}
			else
			{
				cents = coinCount % 25;
			}
		}
		if ((cents % 10) != cents)
		{
			coinCount = coinCount + (cents / 10);
			if ((cents % 10) == 0)
			{
				printf("%d\n", coinCount);
				return (0);
			}
			else
			{
				cents = coinCount % 10;
			}
		}
		if ((cents % 5) != cents)
		{
			coinCount = coinCount + (cents / 5);
			if ((cents % 5) == 0)
			{
				printf("%d\n", coinCount);
				return (0);
			}
			else
			{
				cents = coinCount % 5;

			}
		}
		if ((cents % 2) != cents)
		{
			coinCount = coinCount + (cents / 2);
			if ((coinCount % 2) == 0)
			{
				printf("%d\n", coinCount);
				return (0);
			}
			else
			{
				cents = coinCount % 2;

			}
		}

		if (cents > 0)
		coinCount = cents + coinCount;

		printf("%d\n", coinCount);
		return (0);
	}
}
