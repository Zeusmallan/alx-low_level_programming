#include "main.h"
/**
 * print_alphabet -  Prints alphabets in lowe case
 * Returns: 0
 */
void print_alphabet(void)
{
	int i = 97;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
