#include "3-calc.h"
/**
*main - a program that add numbers
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", *(ptr + i));
	}

	printf("\n");
	return (0);
}
