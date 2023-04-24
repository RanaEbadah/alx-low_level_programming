#include<stdio.h>
/**
* main - a prgram that the alphabet small case
* Return: 0 always zero
*/
int main(void)
{
	char alphas[28];
	int i;

	for (i = 0; i < 28; i++)
	{
		alphas[i] = 'a' + i;
		putchar(alphas[i]);
	}
	return (0);
}
