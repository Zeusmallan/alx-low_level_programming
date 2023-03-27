#include "main.h"
/**
 * _puts - Function that prints a string with a new line.
 * @str: The address of the string.
 * Retunrn: 0 (Success).
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
