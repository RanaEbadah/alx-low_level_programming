#include<stdio.h>
/**
* main - a prgram that the alphabets
* Return: 0 always zero
*/
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		if (i == 'z')
		{
			for (j = 'A'; j <= 'Z'; j++)
			{
				putchar(j);
			}
		}
	}
	putchar('\n');
	return (0);
}
