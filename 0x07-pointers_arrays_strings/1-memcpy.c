#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: A pointer of a variable of char type.
 * @src: A pointer of another char variable.
 * @int n: Number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
