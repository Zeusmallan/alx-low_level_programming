#include "main.h"
/**
 * _pow_recursion - Recursively calculates x^y
 * @x: Integer input.
 * @y: Another integer input.
 * Return: THe value of x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
