#include "main.h"
/**
 * str_length - checks the lenght of a string.
 * @s: Pointer of the string to be checked.
 * Return: Length of the string.
 */
int str_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_length(s + 1));
	}
}
/**
 * observep - Checks if a string is palindrome.
 * @i: Index of a string.
 * @lgt: Length of a string.
 * @s: pointer of a string.
 * Return: 1 if string is palindrome and 0 if not.
 */
int observep(int i, int lgt, char *s)
{
	if (lgt > 0)
	{
		if (s[i] == s[lgt])
		{
			return (observep(i + 1, lgt - 1, s));
		}
		else if (s[i] != s[lgt])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrome - Checks if a string is a palindirome.
 * @s: Pointer of stting to be checked.
 * Return: 1 if string is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	return (observep(0, str_length(s) - 1, s));
}
