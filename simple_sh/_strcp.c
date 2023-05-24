#include "main.h"
/**
 * _strcpy - Copies a string from the source
 * @dest: destination.
 * @src: Source
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}

