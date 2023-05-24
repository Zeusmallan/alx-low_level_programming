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
 * user - Function that prompts a user to give input.
 */

void user(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	char *tokens[MAXIMUM_TOKENS] = {NULL};
	ssize_t args;
	char *sh_prompt = "$ ";

	while (1)
	{
		write(STDOUT_FILENO, sh_prompt, 2);
		args = getline(&buffer, &buffer_size, stdin);

		if (args == -1)
		{
			if (feof(stdin))
			{
				break;
			}
			else
			{
				perror("Getline Failure");
				free(buffer);
				exit(EXIT_FAILURE);
			}
		}
		if (buffer[args - 1] == '\n')
		{
			buffer[args - 1] = '\0';
			tokenize(buffer, tokens);
			execute(tokens[0], tokens);
		}
	}
	free(buffer);
}
