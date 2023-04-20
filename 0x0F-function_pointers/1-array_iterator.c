#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints every array on different line
 * @array: Pointer of the array.
 * @size: Size of the array elements in bytes.
 * @action: Function pointer.
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
