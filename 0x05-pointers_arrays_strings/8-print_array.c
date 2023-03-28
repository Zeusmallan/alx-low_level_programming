#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints array of intgers.
 * @a: Pointer of an array.
 * @n: An array of integers.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
			printf(" , ");
	}
	_putchar("\n");
}

