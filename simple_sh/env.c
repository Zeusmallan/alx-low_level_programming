#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * print_environment - Function that handles and
 * prints the current environment.
 */
void print_environment(void)
{
	char **env = environ;
	char *var;
	size_t length;

	while (*env != NULL)
	{
		var = *env;
		length = _strlen(var);
		write(STDOUT_FILENO, var, length);
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
