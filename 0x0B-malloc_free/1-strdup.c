#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to copy from.
 * Return: 0 if Successful and NULL if string is NULL.
 */
char *_strdup(char *str)
{
	char str;
	unsigned int n;

	if (str == NULL)
	{
		return (NULL);
	}
	size_t n = strlen(str);
	char *new_str = (char *)malloc((n + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
