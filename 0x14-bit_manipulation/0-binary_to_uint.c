#include "main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int.
*@b: string represent the binary number
*Return: the decimal result
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int bitsCounter = 0;
	unsigned int result = 0;

	if (!b)
	return (0);

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (0);
		}
		bitsCounter++;
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		result = result +
		((((unsigned int)(b[i])) - 48) * PowerCalc(2, (bitsCounter - i - 1)));
		i++;
	}
		return (result);

}


/**
*PowerCalc - calculate power
*@base: the base int.
*@powerNum: the power int
*Return: unsigned int
*
*/
unsigned int PowerCalc(unsigned int base, unsigned int powerNum)
{
	unsigned int i = 0, result = 1;

	for (i = 0; i < powerNum; i++)
	{
		result = result * base;
	}

	return (result);
}
