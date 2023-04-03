#include "main.h"
/**
 * _strpbrk - Searches through a string for set of bytes.
 * @s: Pointer of a varaiable of type char.
 * @accept: Another pointer to variable of type char.
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return ('\0');
}
