#ifndef SHELL_H
#define SHELL_H
#include <sys/types.h>
#include <stdio.h>
#define BUFFER_SIZE 1024
#define MAXIMUM_TOKENS 128
extern char **environ;
void execute(char *cmd, char **args);
void tokenize(char *cmd, char **tokens);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *my_getenv(char *id);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);
void user(void);
void execute_command(char *command, char **arguments);
void execute_child_process(char *command, char **arguments);
void wait_stat(pid_t child_pid);
char *_strdup(char *str);
void print_environment(void);
void exit_args(char **args);
void execute_cd(char **args);
void execute_setenv(char **args);
void execute_unsetenv(char **args);
#endif
