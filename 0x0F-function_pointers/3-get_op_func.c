#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Allows the user tp select an operation to perform.
 * @s: The opreator paseed as argument.
 * Return: Pointer to the function that correlates with the operator
 * passed as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
}
