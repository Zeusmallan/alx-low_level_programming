#include "main.h"
/**
 * print_square - Print square made of #
 * @size: Size of square.
 * Return: Square made of #.
 */
void print_square(int size)
{
	int point = 0;
	int start;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (start = 0; start < size; start++)
		{
			while (point < size)
			{
				_putchar('#');
				point++;
			}
			point = 0;
			_putchar('\n');
		}
	}
}
