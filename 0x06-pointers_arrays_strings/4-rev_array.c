#include "main.h"
/**
 * reverse_array - reverses contents of array
 * @a: Pointer of the first array.
 * @n: Second array.
 * Return: reverse contents.
 */
void reverse_array(int *a, int n)
{
	int o;
	int p;

	for (o = 0; o < n--; o++)
	{
		p = a[o];
		a[o] = a[n];
		a[n] = p;
	}
}
