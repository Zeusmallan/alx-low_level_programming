#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of char and 
 * initializes it with a specific char
 * @unsigned int size: Size of the array.
 * @c: Character to initialize the array to.
 * Return: Pointer to the array, if there is any, return NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int n;
	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	for (n == 0; n < size; n++)
		string[n] = c;
	return (string);
}
