#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include "main.h"
/**
 * execute_builtin_command - Function that executes builint commands.
 * @args: Command arguments.
 */
void execute_builtin_command(char **args)
{
	if (args[0] == NULL)
	{
		return;
	}
	if (_strcmp(args[0], "cd") == 0)
	{
		execute_cd(args);
	}
	else if (_strcmp(args[0], "setenv") == 0)
	{
		execute_setenv(args);
	}
	else if (_strcmp(args[0], "unsetenv") == 0)
	{
		execute_unsetenv(args);
	}
	else
	{
		execute_command(args[0], args);
	}
}
