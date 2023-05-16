#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
*create_array -  creates an array of chars,
*and initializes it with a specific char.
*@size: int the size of the array.
*@c: char the initializer character.
*Return: pointer to the array
*
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
	return (NULL);


	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);

}
