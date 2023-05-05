#include <stdio.h>
#include "main.h"

/**
 * get_bit - A function that returns
 * the bit value of bit in a given index.
 * @n: The number to give it's bit value.
 * @index: Index of the bit.
 * Return: The value of the bit or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	unsigned int i = 63;

	if (index > i)
	{
		return (-1);
	}
	else
	{
		if (index < i)
		{
			bit_value = (n >> index) & 1;
		}
		else
		{
			bit_value = n >> i;
		}
		return (bit_value);
	}
}

