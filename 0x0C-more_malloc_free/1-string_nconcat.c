#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Function that concatonates two strings.
 * @s1: Pointer of one of the first strings.
 * @s2: Pointer of the second string.
 * @n: Index of the string.
 * Return: Pointer to the new space allocated in Menory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int sze1 = 0;
	unsigned int sze2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[sze1] != '\0')
	{
		sze1++;
	}
	while (s2[sze2] != '\0')
	{
		sze2++;
	}
	if (n >= sze2)
		n = sze2;
	result = malloc((sze1 + n + 1) * sizeof(char));
	if (result == NULL)
		return (0);
	for (i = 0; i < sze1; i++)
	{
		result[i] = s1[i];
	}
	for (; i < (sze1 + n); i++)
	{
		result[i] = s2[i - sze1];
	}
	result[i] = '\0';
	return (result);
}
