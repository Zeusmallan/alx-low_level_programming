#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory using malloc function.
 * @nmemb: Number of Elements in the string.
 * @size: Bytes of the each element.
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int l;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < nmemb * size; l++)
	{
		ptr[l] = 0;
	}
	return (ptr);
}
