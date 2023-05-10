#include "main.h"

int checkPrime(int n, int num);

/**
*checkPrime -  returns 1 if the input integer is a prime number
*otherwise return 0
*@n: first int
*@num: second int
*Return: int
*/

int checkPrime(int n, int num)
{
	if (num >= n)
	{
		return (0);
	}
	else if (num > 9)
	{
		return (1);
	}
	else
	{
		if ((n % num) == 0)
		return (0);
		return (checkPrime(n, num + 1));
	}

}

/**
*is_prime_number -  returns 1 if the input integer is a prime number
*otherwise return 0
*@n: first int
*Return: int
*/

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (checkPrime(n, 2));

	}

}
