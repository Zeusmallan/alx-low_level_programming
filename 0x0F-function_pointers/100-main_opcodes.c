#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its opcodes.
 * @argc: Number of arguments passed.
 * @argv: Array of arguments passed.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int bytes;
	int i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
}
