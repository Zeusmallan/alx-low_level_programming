#include <stdio>
#include "main.h"
/**
 * main - Prints all arguements passed.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 (Successful).
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
