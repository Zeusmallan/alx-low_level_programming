#include "main.h"
/**
 * print_line - Function that draws straight line in the terminal.
 * @n: input number
 * Return: Straight line.
 */
void print_line(int n)
{
	int line = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (line < n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
