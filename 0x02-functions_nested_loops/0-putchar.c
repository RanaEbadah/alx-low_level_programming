#include "main.h"
/**
* main - a program that prints _putchar, followed by a new line.
* and print if it positive or negative or zero
* Return: 0 always zero
*/
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int j = 0;

	for (int i = 0; i <= 7; i++)
	{
		j = _putchar(i);
	}
	j = _putchar('\n');
	return (0);
}
