#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Gives the length of a string.
 * @s: String to compute it's length.
 * Return: 1 (string length).
 */
int _strlen(char *s)
{
	unsigned int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (1);
}

/**
 * str_concat - Concatonates two strings.
 * @s1: One of the strings to merge.
 * @s2: The seond string to merge with the first one.
 * Return: Pointer to the allocated space.
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;
	unsigned int a, b, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = (_strlen(s1) + _strlen(s2) + 1);
	dest = (char *) malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (a = 0; *(s1 + a) != '\0'; a++)
		*(dest + a) = *(s1 + a);
	for (b = 0; *(s2 + b) != '\0')
	{
		*(dest + a) = *(s2 + b);
		a++;
	}
	return (dest);
}
