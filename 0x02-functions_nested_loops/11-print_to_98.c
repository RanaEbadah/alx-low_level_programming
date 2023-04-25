#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print th numbers statrting from n to 98
 *@n: the number that will be print
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 ; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d");
		}
		printf("\n");
	}
}
