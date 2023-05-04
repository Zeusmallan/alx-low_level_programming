#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - Function that converts strings of binaries to unsigned int.
 * @b: The string of binary numbers to convert to digits.
 * Return: The converted number of 0,
 * when the string has numbers other than one and Zeros.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int index = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		while (b[index] != '\0')
		{
			if (b[index] != '0' && b[index] != '1')
			{
				return (0);
			}
			decimal_value = 2 * decimal_value + (b[index] - '0');
			index++;
		}
		return (decimal_value);
	}
}
