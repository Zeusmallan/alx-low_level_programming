#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes the character c to stdout
 * @c: The character that would be printed
 * Return: On succes 1.
 * on error, -1 is returned and error is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
