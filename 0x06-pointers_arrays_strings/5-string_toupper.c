#inclue "main.h"
/**
 * string_toupper - Changes characters to uppper case
 * @j: Pointer of a string.
 * Return: j
 */
char *string_toupper(char *j)
{
	int m = 0;

	while (j[m] != '\0')
	{
		if (j[m] >= 'a' && j[m] <= 'z')
			j[m] = j[m] - 32;
		m++;
	}
	return (j);
}
