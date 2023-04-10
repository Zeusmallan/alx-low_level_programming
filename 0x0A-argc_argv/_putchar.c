#include <stdio.h>
#include "main.h"
/**
 * _putchar - Prints the character c in standard output.
 * @c: Character to print.
 * Return: 1 when successful.
 * When an error is encountered, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
