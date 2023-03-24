#include "main.h"
/**
 * print_line - Function that draws straight line in the terminal.
 * @n: input number
 * Return: Straight line.
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n')
	}
}
