#include <stdio.h>
#include "main.h"
/**
 * set_bit - Funcion that sets the value of bit at a given index to 1.
 * @n: Pointer to the integer to convert.
 * @index: Location of the bit to set to 1.
 * Return: 1 if successful and -1 if error was encountered.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 63;

	if (index > i)
	{
		return (-1);
	}
	else
	{
		if (index < i)
		{
			*n = (*n & ~(1UL << index)) | (1UL << index);
		}
		return (1);
	}
}

