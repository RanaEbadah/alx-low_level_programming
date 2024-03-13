#include<stdio.h>
/**
* main - a prgram that print the alphabet small case in reverse
* Return: 0 always zero
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
