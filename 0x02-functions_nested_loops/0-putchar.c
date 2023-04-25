#include "main.h"
/**
* main - a program that prints _putchar, followed by a new line.
* and print if it positive or negative or zero
* Return: 0 always zero
*/
int main(void)
{
	char arr[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	return (0);
}
