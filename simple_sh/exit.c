#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 *  exit_args - Function thats handles built in exit command with args.
 *  @args: Command arguments.
 */
void exit_args(char **args)
{
	int exit_status = 0;

	if (args[1] != NULL)
	{
		exit_status = atoi(args[1]);
	}
	exit(exit_status);
}
