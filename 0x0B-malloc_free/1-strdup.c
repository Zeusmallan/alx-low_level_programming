#include "main.h"
/**
 * strlen - Returns the length of thr string.
 * @s: String to count.
 * Return: Strlen.
 */
int strlen(char *s)
{
	int c;

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
char *strcopy(char *src, char *dest)
{
	int l = 0;

	while (src[l] != '\0')
	{
		src[l] = dest[l];
		l++;
	}
	if (dest[l] != '\0')
	{
		return (dest);
	}
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

	if (str == '\0')
	{
		return (NULL);
	}
	size = strlen[str] + 1;

	dest = (char *) malloc(size * sizeof(char));
	if dest = '\0'
	{
		return (NULL);
	}
	strcopy(str, dest);
	return (dest);
}

