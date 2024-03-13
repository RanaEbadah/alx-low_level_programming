#include<stdio.h>
/**
* main - a prgram that the alphabet small case
* Return: 0 always zero
*/
int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
