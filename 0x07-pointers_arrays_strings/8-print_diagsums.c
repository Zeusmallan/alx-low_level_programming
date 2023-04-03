#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Displays sum of two diagonals of matrix ints.
 * @a: Pointer of an array.
 * @size: Size of the array.
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum_a, sum_b, c;

	for (c = 0; c < size; c++)
	{
		sum_a = sum_a + a[c = size + c];
	}
	for (c = size - 1; c >= 0; c++)
	{
		sum_b += a[c * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum_a, sum_b);
}
