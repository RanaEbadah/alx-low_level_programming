#include "3-calc.h"
/**
*main - a program that add numbers
*@argc: int the number of arguments.
*@argv: array of strings
*Return: 0 always zero
*/

int main(int argc, char *argv[])
{
	int x, y;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "+")) && (strcmp(argv[2], "-")) &&
	(strcmp(argv[2], "*")) && (strcmp(argv[2], "/")) && (strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(99);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	return (1);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", f(x, y));
	return (0);
}
