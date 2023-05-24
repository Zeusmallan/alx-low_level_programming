#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "main.h"
/**
 * execute - Function that executes command from PATH.
 * @cmd: Commands.
 * @args: Arguments.
 */

void execute(char *cmd, char **args)
{
	char *pth = getenv("PATH");
	char *pth_cpy = _strdup(pth);
	char *dir = strtok(pth_cpy, ":");
	char *compl_path = NULL;

	if (_strcmp(cmd, "exit") == 0)
	{
		exit_args(args);
		return;
	}
	if (access(cmd, X_OK) == 0)
	{
		execute_command(cmd, args);
		free(pth_cpy);
		return;
	}
	while (dir != NULL)
	{
		compl_path = malloc(_strlen(dir) + _strlen(cmd) + 2);
		if (compl_path == NULL)
		{
			perror("Malloc failed");
			free(pth_cpy);
			return;
		}
		_strcpy(compl_path, dir);
		_strncat(compl_path, "/", 2);
		_strncat(compl_path, cmd, _strlen(cmd) + 1);
		if (access(compl_path, X_OK) == 0)
		{
			execute_command(compl_path, args);
			free(pth_cpy);
			free(compl_path);
			return;
		}
		free(compl_path);
		dir = strtok(NULL, ":");
	}
	perror("Error: Command not found");
	free(pth_cpy);
}

/**
 * execute_command - Function that handles the fork process.
 * @command: Commands entered by the user.
 * @arguments: Command line arguments.
 */
void execute_command(char *command, char **arguments)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("Fork failure");
	}
	else if (child_pid == 0)
	{
		execute_child_process(command, arguments);
	}
	else
	{
		wait_stat(child_pid);
	}
}
/**
 * execute_child_process - Function that executes commands when fork is 0.
 * @command: Commands entered.
 * @arguments: Command line arguments.
 */
void execute_child_process(char *command, char **arguments)
{
	execve(command, arguments, environ);
	perror("Error: Exec failed");
	exit(EXIT_FAILURE);
}
/**
 * wait_stat - Function that checks for the wait status of the parent process.
 * @child_pid: Child process.
 */
void wait_stat(pid_t child_pid)
{
	int status;

	waitpid(child_pid, &status, 0);
}
