#include <stdlib.h>
#include "main.h"
/**
 * array_range - Function that creates an array of integers.
 * @min: One of the Integers.
 * @max: The other integer.
 * Return: Pointer to the array of the integers.
 */
int *array_range(int min, int max)
{
	int *arr;
	int len = 0;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	arr = (int *) malloc(len * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

