#include "main.h"
/**
 * print_diagonal - This orints a diagonal line using character \.
 * @n: The number of \ character to be printed.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n);
		}
	}
}
