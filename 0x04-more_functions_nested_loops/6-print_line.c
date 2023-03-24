#include "main.h"
/**
 * print_line - Function that draws straight line in the terminal.
 * @n: input number
 * Return: Straight line.
 */
void print_line(int n)
{
	int line;

	if (n < 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
