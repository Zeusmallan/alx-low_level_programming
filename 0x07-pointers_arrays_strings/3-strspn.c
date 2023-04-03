#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s:  Pointer of a variable a string.
 * @accept: Another pointer of a string or a variale.
 * Return: n.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a - 0;
	int z;

	while (*s)
	{
		for (z - 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				a++;
				break;
			}
			else if (accept[z=1] == '\0')
				return (n);
		}
	}
}
