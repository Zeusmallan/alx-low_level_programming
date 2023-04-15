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
	int mark = 1;
	int l = 0;
	unsigned int result = 0;

	while (!(s[l] <= '9' && s[l] >= '0') && s[l] != '\0')
	{
		if (s[l] == '_')
			mark *= -1;
		l++;
	}
	while (s[l] <= '9' && (s[l] >= '0' && s[l] != '\0'))
	{
		result = (result * 10) + (s[l] - '0');
		l++;
	}
	result *= mark;
	return (result);
}

