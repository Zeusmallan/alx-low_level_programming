#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name.
 * @name: Pointer to a string of characters.
 * @f: Pointer to a function
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
