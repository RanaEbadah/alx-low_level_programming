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

	while (reversed > 0)
	{
		int digit = reversed % 10;

		_putchar('0' + digit);
		reversed /= 10;
	}
}


/**
*linear_search - searches for a value in an array of integers
*using the Linear search algorithm.
*@array: pointer to the first element of the array to search in.
*@size: number of elements in array.
*@value: value to search for.
*Return: the first index where value is located
*        return -1 If value is not present in array or if array is NULL.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char displayedStr[100] = "";
	char i_str[20] = "";
	char value_str[10] = "";
	char resultStr[100] = "";
	char currentint[10] = "";

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		sprintf(i_str, "%ld", i);
		sprintf(value_str, "%d", value);
		sprintf(currentint, "%d", array[i]);

		strcpy(displayedStr, "Value checked array[");

		strcat(displayedStr, i_str);
		strcat(displayedStr, "] = [");
		strcat(displayedStr, currentint);
		strcat(displayedStr, "]\n");

		print_str(displayedStr);

		if (array[i] == value)
		{
			strcat(resultStr, "Found ");

			strcat(resultStr, value_str);
			strcat(resultStr, " at index: ");
			strcat(resultStr, i_str);

			return ((int)i);
		}

		continue;
	}
	return (-1);
}
