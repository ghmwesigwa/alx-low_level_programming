#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - function to select correct operation function
* @s: operation given (+, *, -, /, %)
*
* Return: pointer to correct operation function (0-4)
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
