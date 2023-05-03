#include "main.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random password
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;
	int randomNum = 0;
	char numbers[] = "0123456789";
	char s_letter[] = "abcdefghijklmnopqrstuvwxyz";
	char C_letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$^&?*-_";
	int n = 14;
	char password[14];

	srand((unsigned int)(time(NULL)));
	randomNum = rand() % 4;
	for (i = 0; i < n; i++)
	{
		if (randomNum == 1)
		{
			password[i] = numbers[rand() % 10];
			randomNum = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomNum == 2)
		{
			password[i] = symbols[rand() % 8];
			randomNum = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomNum == 3)
		{
			password[i] = C_letter[rand() % 25];
			randomNum = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = s_letter[rand() % 26];
			randomNum = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
