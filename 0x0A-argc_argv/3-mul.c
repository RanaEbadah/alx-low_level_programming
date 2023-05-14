#include<stdio.h>
#include "main.h"
#include<stdlib.h>
#include <ctype.h>
/**
*main - a program that mutiply two numbers
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int x = 0, y = 0, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);

}
