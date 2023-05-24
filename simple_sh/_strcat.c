#include "main.h"
/**
 * _strncat - A function that concatenates two strings.
 * @dest: Destination.
 * @src: Character source.
 * @n: an array.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int p = 0;

	while (dest[m] != '\0')
	{
		m++;
	}
	while (p < n && src[p] != '\0')
	{
		dest[m] = src[p];
		m++;
		p++;
	}
	dest[m] = '\0';
	return (dest);
}
