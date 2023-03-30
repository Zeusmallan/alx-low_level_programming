#include "main.h"
/**
 * rot13 - Encodes a strng into rot13
 * @k: Pointer.
 * Return: *k
 */
char *rot13(char *k)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; k[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (k[i] == data[j])
			{
				k[i] = datarot[j];
				break;
			}
		}
	}
	return (k);
}
