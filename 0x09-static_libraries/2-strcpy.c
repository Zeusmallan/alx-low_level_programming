#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: Destination of character.
 * @src: Source of character.
 * @n: An array.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int jakle = 0;

	while (jakle < n && src[jakle] != '\0')
	{
		dest[jakle] = src[jakle];
		jakle++;
	}
	while (jakle < n)
	{
		dest[jakle] = '\0';
		jakle++;
	}
	return (dest);
}
