#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Functions that prints a string.
 * @separator: String of elements to be printed between a string.
 * @n: The number of arguments.
 * @...: Indefinite arguments of a string.
 * Note: If separator string is NULL, do not print.
 * if one string is NULL, print nil.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(string);
	}
}
