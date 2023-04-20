#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Variadic function that sums all the parameters.
 * @n: Parameters passed to the function.
 * @...: All the parameters passed as arguments.
 * Return: -0 if n = 0. otherwise the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
		va_end(args);
	}
	return (sum);
}

