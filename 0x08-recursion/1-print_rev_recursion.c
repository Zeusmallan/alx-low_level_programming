#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Input of a pointer of a string.
 * Return: 0 (Success).
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s - 1);
		_putchar(*s);
	}
}
