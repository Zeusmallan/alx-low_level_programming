#include "main.h"
/**
 * print_diagonal - This orints a diagonal line using character \.
 * @n: The number of \ character to be printed.
 */
void print_diagonal(int n)
{
	int a = 0;
	int b = 0;
	int c;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (a < n)
		{
			c = a;
			while (b <= end)
				if (b == c)
				{
					_putchar('\\');
					-putchar('\n');
				}
				else
					_putchar(' ');
			b++;
		}
		b = 0;
		a++;
	}
}

