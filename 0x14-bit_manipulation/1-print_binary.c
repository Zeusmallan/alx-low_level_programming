#include <stdio.h>
#include "main.h"
/**
 * print_binary - Function that prints the binary form of a number.
 * @n: Number to be converted to binary form.
 * Return: Nothing to return since return type is void.
 */
void print_binary(unsigned long int n)
{
	int index;
	int iterate = 0;
	unsigned long int present;

	for (index = 63; index >= 0; index--)
	{
		present = n >> index;
		if ((present & 1) == 1)
		{
			_putchar ('1');
			iterate++;
		}
		else if (iterate != 0)
		{
			_putchar ('0');
		}
	}
	if (iterate == 0)
	{
		_putchar ('0');
	}
}
