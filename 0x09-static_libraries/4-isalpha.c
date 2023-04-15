#include "main.h"
/**
 * _isalpha - Returns 1 if c is upper or lowercase.
 * @c: Character in ASCII tabele'
 * Return: 1 for lower or upper cases c and 0 for others characters
 */
int _isalpha(int c)
{
	if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
