#include "main.h"
/**
 * swap_int - Funcion that swaps the value of two intergers a and b.
 * @a: First interger to be swapped.
 * @b: Second integer to be swapped.
 * Return: 0 (Success).
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
