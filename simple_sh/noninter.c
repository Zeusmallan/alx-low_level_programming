#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "main.h"
/**
 * main - Function that works for both interactive and
 * non interactive modes.
 * @argc: Argument counts.
 * @argv: String of characters entered on the command line.
 * Return: 0 when successful.
 */
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (_strcmp(argv[1], "env") == 0)
		{
			print_environment();
		}
		else
		{
			execute(argv[1], argv + 1);
		}
	}
	{
		user();
	}
	return (0);
}

