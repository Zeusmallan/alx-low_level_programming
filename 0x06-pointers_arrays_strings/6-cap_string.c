#include "main.h"
/**
 * cap_string - Capitalizes all the words in a string.
 * @n: Pointer of the string to be capitalized.
 * Return: n
 */
char *cap_string(char *n)
{
	int index = 0;

	while (n[index])
	{
		while (!(n[inex] >= 'a' && n[index] <= 'z'))
			index++;
		if (n[index - 1] == ' ' ||
				n[index - 1] == '\t' ||
				n[index - 1] == '\n' ||
				n[index - 1] == ',' ||
				n[index - 1] == ';' ||
				n[index - 1] == '_' ||
				n[index - 1] == '!' ||
				n[index - 1] == '?' ||
				n[index - 1] == '"' ||
				n[index - 1] == '(' ||
				n[index - 1] == ')' ||
				n[index - 1] == '{' ||
				n[index - 1] == '}' ||
				index == 0)
			n[index] -= 32;
		index++;
	}
	return (n);
}

