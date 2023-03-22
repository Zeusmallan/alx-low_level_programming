#include "main.h"
/**
 * times_table - Function that prints the times table, starting from 0
 * Return: 0 (Success)'
 */
void times_table(void)
{
	int num, mult, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;
			if (prod <= 9)
				_putchar('');
			else
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) _ '0');
		}
		_putchar('\n');
	}
}
