#include "main.h"
#include <stddef.h>
/**
 * _strlen - Function that returns the length of a string.
 * @s: The string tio return its length.
 * Return: Length (Success).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strcmp - Function that compares two strings.
 * @s1: Pointer of the first string.
 * @s2: Pointer of the second string
 * Return: s1[m] = s2[m]
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
/**
 * my_getenv - My custome getenv function hand PATH for
 * my shell implementation.
 * @id: The name of the environment variable.
 * Return: NULL.
 */
char *my_getenv(char *id)
{
	size_t idlen;
	char **env;

	if (id == NULL)
	{
		return (NULL);
	}
	idlen = _strlen(id);
	for (env = environ; *env != NULL; env++)
	{
		if (_strcmp(id, *env) == 0 && _strcmp(&(*env)[idlen + 1], "=") == 0)
		{
			return (&(*env)[idlen + 1]);
		}
	}
	return (NULL);
}
