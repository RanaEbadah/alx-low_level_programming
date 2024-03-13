#include<stdio.h>
/**
* main - a prgram that print numbers combination
* Return: 0 always zero
*/
int main(void)
{
	int n1, n2;

	n1 = 0;
	while (n1 <= 9)
	{
		n2 = 0;

		while (n2 <= 9)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);
				if ((n1 + n2) != 17)
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
