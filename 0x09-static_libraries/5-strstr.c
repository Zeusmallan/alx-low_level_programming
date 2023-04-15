#include "main.h"
/**
 * _strstr - Function that locates a substring.
 * @needle: A substring(input).
 * @haystack: String the houses a substring (input).
 * Return: 0 (Success).
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *k = needle;

		while (*j == *k && *k != '\0')
		{
			j++;
			k++;
		}
		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
