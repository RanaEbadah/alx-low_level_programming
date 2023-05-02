#include "main.h"
/**
 *_atoi - get the in from string.
 *@s: a pointer to string.
 *Return: int.
 *
 */
int _atoi(char *s)
{
	int length = 0;
	int i;
	int index = 0;
	int done = 0;
	int num = 0;

	while (char[i])
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			if (done == 0)
			{
				index = i;
				done = 1;
			}

			num = num * 10 + (s[i] - 48);
		}
	}

	if (done == 1)
	{
		if (s[index - 1] == '-')
		{
			num = num * -1;
		}

	}

	Return(num);
}
