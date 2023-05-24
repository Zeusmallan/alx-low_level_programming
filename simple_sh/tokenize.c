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
 * tokenize - Function that executes arguments/strings
 * gotten from command line.
 * @cmd: Commands entered on the command line.
 * @tokens: Command line arguments.
 */
void tokenize(char *cmd, char **tokens)
{
	int index_tokens = 0;
	char *token = strtok(cmd, " ");

	while (token != NULL && index_tokens < MAXIMUM_TOKENS - 1)
	{
		tokens[index_tokens] = token;
		index_tokens++;
		token = strtok(NULL, " ");
	}
	tokens[index_tokens] = NULL;
}
