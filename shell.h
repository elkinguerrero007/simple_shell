#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <sys/type.h>

#define TOKENS_BUFFER_SIZE 64
#define LINE_SIZE 1024
#define TOKEN_DELIMITERS " \t\r\n\a"

/**
 * struct builtins - Has builtins and associated funcs
 * @arg: Builtins name
 * @builtin: Mathcing builtin func
 * **/
typedef struct builtins
{
	char *arg;
	void (*builtin)(char **args, char *line, char **env);
} builtins_t;

void shell(int ac, char **av, char **env);
void prompt(void);
char *_getline(void);
char **split_line(char *line);
int bridge(char *check, char **args);
int builtins_checker(char **args);
void exit_shell(char **args, char *line, char **env);
void env_shell(char **args, char *line, char **env);

#endif
