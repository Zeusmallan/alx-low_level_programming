#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers passed as arguements.
 * @separator: Elements of a string to be printed in between numbers.
 * @n: Number of intergers passed as arguemnts.
 * @...: Indefinite number of parameters.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list digits;
	unsigned int i;

	va_start(digits, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digits, int));
		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf ("\n");
	va_end(digits);
}
