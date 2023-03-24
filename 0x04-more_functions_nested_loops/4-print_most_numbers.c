#include "main.h"
/**
 * print_most_numbers - A function that 0-9 without 2 and 4.
 * Return: 0-9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || ii == 4)

		continue;
		else
		_putchar(i + '0');
	}
		_putchar('\n');
}
