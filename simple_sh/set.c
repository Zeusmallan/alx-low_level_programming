#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * setenv - Function that sets environment.
 * @args: Arguments.
 */
void execute_setenv(char **args)
{
	if (args[1] == NULL || args[2] == NULL)
	{
		write(STDERR_FILENO, "setenv: failed\n", 14);
		return;
	}
	if (setenv(args[1], args[2], 1) == -1)
	{
		write(STDERR_FILENO, "setenv: Environment variable set failed\n", 35);
		return;
	}
}
/**
 * unsetenv - Function that unsets environment.
 * @args: Arguments
 */
void execute_unsetenv(char **args)
{
	if (args[1] == NULL)
	{
		write(STDERR_FILENO, "unsetev: failed\n", 15);
		return;
	}
	if (unsetenv(args[1]) == -1)
	{
		write(STDERR_FILENO, "unsetenv: failed to unsetenv\n", 28);
		return;
	}
}
