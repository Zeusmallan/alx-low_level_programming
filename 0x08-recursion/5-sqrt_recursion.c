#include "main.h"
/**
 * _sqrt_helper - Checks if the number has a squareroot.
 * @num: Number whose square root would be checked.
 * @aSqrt: Available sqrt of an integer
 * Return: Sqrt of number
 */
int _sqrt_helper(int num, int aSqrt)
{
	if ((aSqrt * aSqrt) == num)
	{
		return (aSqrt);
	}
	else if ((aSqrt * aSqrt) > num)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(num, aSqrt + 1));
	}
}
/**
 * _sqrt_recursion - Return square root of a number.
 * @n: Number whose square root would be returned.
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}
