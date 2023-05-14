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
	int coinCount = 0, cents, j;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			if (cents > 0)
			{
				while (cents >= arr[j])
				{
					coinCount++;
					cents = cents - arr[j];
				}
			}

		}
	}

	printf("%d\n", coinCount);
	return (0);
}
