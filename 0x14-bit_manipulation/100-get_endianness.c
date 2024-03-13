#include "main.h"

/**
*get_endianness -  checks the endianness.
*Return: 0 if big endian, 1 if little endian
*
*/
int get_endianness(void)
{
	unsigned int x = 0x12345678;
	char *ptr = (char *)&x;

	if (*ptr == 0x78)
	return (1);
	else if (*ptr == 0x12)
	return (0);
	else
	return (-1);
}
