#include "main.h"

/**
 *  _isdigit - Function that checks if a chararacter is a digit.
 *  @c: Character that would be checked.
 *  Return: 0 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
