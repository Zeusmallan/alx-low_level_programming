#include "main.h"
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
