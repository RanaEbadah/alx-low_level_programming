#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
*main - a program that mutiply two numbers
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int x = 0, y = 0;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);

	printf("%d\n", atoi(x * y));

	return (0);


}
