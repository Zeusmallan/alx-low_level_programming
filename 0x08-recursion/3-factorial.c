#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: Represents any number input.
 * Return: Factorial of n.
 * -1 indicates erorr factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


