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
	int sum0, sum1, c;

	sum0 = 0;
	sum1 = 0;

	for (c = 0; c < size; c++)
	{
		sum0 = sum0 + a[c = size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		sum1 += a[c * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum0, sum1);
}
