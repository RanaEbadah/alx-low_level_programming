#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include <ctype.h>

/**
*checkInt - a function to check the int
*@intStr: the string to be checked
*Return: int
*/

int checkInt(char *intStr)
{
	int i, isDigit;

	for (i = 0; intStr[i] != '\0'; i++)
	{
		isDigit = isdigit(intStr[i]);
		if (!isDigit)
		return (0);
	}
	return (1);
}

/**
*main - a program that add numbers
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int isInt, i, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			isInt = checkInt(argv[i]);

			if (isInt != 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result = result + atoi(argv[i]);
			}
		}

	}

	printf("%d\n", result);
	return (0);
}
