#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: Sinlge arguenet that memory would be reserved for.
 * Return: Void.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;


	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
