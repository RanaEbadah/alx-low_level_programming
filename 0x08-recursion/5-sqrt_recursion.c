#include "main.h"

int sqrt_1(int x, int y);

/**
*_sqrt_recursion -  returns the  natural square root of a number.
*@n: first int
*Return: int
*/
int _sqrt_recursion(int n)
{
	return (sqrt_1(n, 1));

}

/**
*sqrt_1 -  returns the  natural square root of a number.
*@x: first int
*@y: second int
*Return: int
*/
int sqrt_1(int x, int y)
{
	if (y * y == x)
	return (y);
	else if (y * y < x)
	return (sqrt_1(x, y + 1));
	else if (y * y > x)
	return (-1);
	else
	return (-1);
}
