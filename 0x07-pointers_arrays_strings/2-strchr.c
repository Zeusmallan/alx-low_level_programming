#include "main.h"
/**
 * _strchr -  Function that locates a character in A string.
 * @s: Pointer of the string.
 * @c: Charater to be located.
 * Return: S or null.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == C)
		{
			return (s);
		}
			s++
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
