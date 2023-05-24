#include "function_pointers.h"

/**
*print_name -  prints a name.
*@name: the name that will be print.
*@f: pointer to the function that will print
*Return: void
*
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
