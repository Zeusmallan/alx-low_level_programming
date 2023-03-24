#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes the character c to stdout
 * @c: The character that would be printed
 * Return: Return 1 when successful and 0 when it is not successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
