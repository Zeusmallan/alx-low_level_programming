#include "main.h"
/**
 * print_square - Print square made of #
 * Return: Square made of #.
 */
void print_square(int size)
{
	int co ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; ro <= size; ro++)
		{
			_putchar('#');
		}
		_putchar('\n');

		for (ro = 2; ro <= size; ro++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

