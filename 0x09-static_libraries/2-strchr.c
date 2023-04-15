#include "main.h"
/**
 * _strchr -  Function that locates a character in A string.
 * @s: Pointer of the string.
 * @c: Charater to be located.
 * Return: S or null.
 */
char *_strchr(char *s, char c)
{
	int f = 0;

	for (; s[f] >= '\0'; f++)
	{
		if (s[f] == c)
			return (&s[f]);
		}
		return (0);
}
