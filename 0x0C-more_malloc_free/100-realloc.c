#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Function that allocates memory block using malloc and free.
 * @old_size: Old Size of memory block.
 * @new_size: New size on memory block.
 * @ptr: Pointer of old_size.
 * Return: Pointer to the new memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *copy;
	int *realloc;
	unsigned int l;

	if (ptr != NULL)
	{
		copy = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		fre(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
	{
		return (0);
	}
	for (l = 0; l < (old_size || l < new_size); l++)
	{
		*(realloc + l) = copy[l];
	}
	free(ptr);
	return (realloc);
}
