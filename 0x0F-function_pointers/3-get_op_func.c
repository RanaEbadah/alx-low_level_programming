#include "3-calc.h"

/**
*get_op_func - function that select the operation
*@s: the operator
*Return: pointer to function
*
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < ((int)(sizeof(ops) / sizeof(op_t))))
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
