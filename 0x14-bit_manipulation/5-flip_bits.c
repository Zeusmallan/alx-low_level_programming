#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Function that returns the number of bits
 * to flip to move from one number to the other.
 * @n: The first number to move through.
 * @m: The second number to move through.
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a = 63;
	int iterate = 0;
	unsigned long int first;
	unsigned long int second = n ^ m;

	for (; a >= 0; a--)
	{
		first = second >> a;
		if (first & 1)
		{
			iterate++;
		}
	}
	return (iterate);
}
