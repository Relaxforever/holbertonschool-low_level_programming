#include "3-calc.h"
#include <string.h>

/**
*get_op_func - gets all the functions
*@s: the symbols that will be evaluated
*Return: return the signed and the function pointing to it.
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
	while (i < 6)
	{
		if ((strcmp(s, ops[i].op)) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
