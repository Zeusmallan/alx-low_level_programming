#include <stdio.h>
#include "main.h"
/**
 * main - function that prints number of arguements passed to it.
 * @argc: Number of arguements passed.
 * @argv: Array of arguements passed.
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
