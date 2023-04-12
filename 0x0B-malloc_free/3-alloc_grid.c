#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates memory to a 2d array.
 * @width: One of the dimensions of array.
 * @height: Another dimension of the array.
 * Return: Pointer to the memody grid.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(ptr[a]);
			}
			free(ptr);
			return (NULL);
		}
	}

	return (ptr);
}
