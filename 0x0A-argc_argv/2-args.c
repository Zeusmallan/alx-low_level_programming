#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguements passed.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 (Successful).
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
