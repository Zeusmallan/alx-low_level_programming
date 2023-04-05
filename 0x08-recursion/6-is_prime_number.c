#include "main.h"
/**
 * _auxilliary_function - Helps to check is number is 0 or 1
 * @num: number to check.
 * @a: Available factor.
 * Return: 0 if not a prim and 1 for prime numbers.
 */
int _auxilliary_function(int num, int a)
{
	if (a < num)
	{
		if (num % a == 0)
		{
			return (0);
		}
		else
		{

			return (_auxilliary_function(num, a + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Checks if n is a prime number.
 * @n: Number to be checked.
 * Return: 1 if n is prime and 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_auxilliary_function(n, 2));
	}
}
