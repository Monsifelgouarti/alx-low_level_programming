#include <string.h>
#include "3-calc.h"
#include <stddef.h>
/**
 * *get_op_func - a function that selects the correct function to perform
 * @s: char* represent the operator
 * Return: a pointer to the correct function.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
