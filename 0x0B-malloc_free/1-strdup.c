#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * strlen - Returns the length of thr string.
 * @s: String to count.
 * Return: Strlen.
 */
int strlen(char *s)
{
	unsigned int c;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * strcopy - copyies elemnts in a string or array.
 * @src: Source of the elements to be copied.
 * @dest: Destination to place the copied elements.
 * Return: dest.
 */
char *strcopy(char *dest, char *src)
{
	int l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * _strdup - Returns pointer to a new copied string.
 * @str: String of elements copied.
 * Return: Pointer to the copied string.
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = strlen(str) + 1;

	dest = (char *) malloc(size * sizeof(char));
	if (dest = 0)
	{
		return (NULL);
	}
	strcopy(dest, str);
	return (dest);
}

