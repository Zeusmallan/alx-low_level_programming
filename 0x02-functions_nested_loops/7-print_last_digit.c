#include "main.h"
/**
 * print_last_digit - Prints last digit of a number'
 * @n: Interger or a number.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 10)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
