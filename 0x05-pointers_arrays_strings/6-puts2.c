#include "main.h"
/**
 * puts2 - Prints every character of a string from the first.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
