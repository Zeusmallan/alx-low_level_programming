#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: The string tio return its length.
 * Return: Length (Success).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}

