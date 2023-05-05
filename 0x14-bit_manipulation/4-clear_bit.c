#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit at a given index to 0.
 * @n: Pointer to the number to convert.
 * @index: Index or position of the number to convert.
 * Return: 1 if succesful and 0 if error was encountered.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 63;

	if (index > i)
	{
		return (-1);
	}
	else if (index == i)
	{
		*n &= (1UL << index);
	}
	else
	{
		if (index < i)
		{
			*n = (~(1UL << index) & *n);
		}
	}
	return (1);
}
