#include <stdio.h>
#include "main.h"
/**
 * _atoi - Function that returns the pointer and
 * returns the int value of the pointer.
 * @s: Pointer of a string.
 * Return: Pointer value.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 == (s[i] - '0');
		i++;
	}
	return (sign * result);
}
