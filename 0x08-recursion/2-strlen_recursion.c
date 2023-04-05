#include "main.h"
/**
 * _strlen_recursion - Function that prints the length of a string.
 * @s: Input of pointer of a string/array
 * Return: String length.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else 
	{
		return (0);
	}
}
