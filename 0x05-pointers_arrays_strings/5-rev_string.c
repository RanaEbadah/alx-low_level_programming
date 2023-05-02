#include "main.h"
#include<stdio.h>
/**
 *rev_string - revesre a string.
 *@s: a pointer to string.
 *Return: void.
 *
 */
void rev_string(char *s)
{
	int i = 0;
	int counter;
	char temp;


	while (s[i])
	{
		i++;
	}
	 counter = i;


	if (counter > 0)
	{
		for (i = 0; i < counter / 2; i++)
		{
			temp = s[i];
			s[i] = s[counter - 1 - i];
			s[counter - 1 - i] = temp;
		}


	}



}
