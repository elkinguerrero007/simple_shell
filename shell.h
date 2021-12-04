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

void shell(int ac, char **av, char **env);
void prompt(void);
char *_getline(void);
char **split_line(char *line);
int bridge(char *check, char **args);
#endif
