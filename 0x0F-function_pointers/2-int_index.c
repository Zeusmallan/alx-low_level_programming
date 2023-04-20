#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function the searches a string for integers.
 * @array: String to search.
 * @size: Size of elements in the array.
 * @cmp: Function pointer.
 * Return: 0 (successful).
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
