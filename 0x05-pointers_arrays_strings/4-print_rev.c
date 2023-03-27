#include "main.h"
/**
 * print_rev - Function that prints string in reverse order.
 * @s: Address of the string to be printed.
 * Return: 0 (success).
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a = a - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
