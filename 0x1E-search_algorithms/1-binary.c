#include "search_algos.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - writes string to stdout
 * @str: The string to print
 */
void print_str(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * print_int - print int to stdout
 * @n: The int to print
 */

void print_int(int n)
{
	int reversed = 0;
	int base = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		int digit = n % 10;

		reversed = reversed * 10 + digit;
		n /= 10;
	}

    while (reversed > base)
    {
        int digit = (reversed / base) % 10;
        putchar('0' + digit);
        base *= 10;
    }
}

/**
*binary_search - searches for a value in a sorted array of integers
*using the Binary search algorithm
*@array: pointer to the first element of the array to search in.
*@size: number of elements in array.
*@value: value to search for.
*Return: index where value is located
*        return -1 If value is not present in array or if array is NULL.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t index = 0;
	size_t i = 0;

	if ((array == NULL) || sizeof(array) == 0)
		return (-1);
	while (low <= high)
	{
		/*print searching in array*/
		print_str("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			print_int(array[i]);
			if (i != high)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		/*new search*/
		index = (high + low) / 2;

		if (array[index] == value)
		{
			return (index);
		}
		else if (value > array[index])
		{
			low = index + 1;
			continue;
		}
		else
		{
			high = index - 1;
			continue;
		}
	}
	return (-1);
}
