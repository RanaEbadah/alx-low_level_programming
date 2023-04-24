#include<stdio.h>
/**
* main - a prgram that print numbers combination
* Return: 0 always zero
*/
int main(void)
{
	int n1, n2;

	n1 = 0;
	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n1 != n2)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(' ');

				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);

				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
