#include "main.h"
/**
 * print_triangle - Function that prints a traingle.
 * @size: Size of the triangle.
 * Return: Nothing when it is successful.
 */
void print_triangle(int size)
{
	int beging = 0, stop = size, count;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (count = 0; count < stop; count++)
		{
			while (begin < stop)
			{
				if ((begin + count + 1) >= stop)
					_putchar('#');
				else
					_putchar(' ');
				begin++;
			}
		begin = 0;
		_putchar('\n');
		}
	}
}
