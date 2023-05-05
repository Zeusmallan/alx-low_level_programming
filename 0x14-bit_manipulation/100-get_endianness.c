#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Function that checks for endianness.
 * Return: Return 1 if little endian or 0 for big endian.
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *s = (char *)&m;

	if (*s == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
