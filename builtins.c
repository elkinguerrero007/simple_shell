#include "shell.h"
/**
 * exit_shell - This will run the builtin exit
 * @line: Line buffer of user input
 * @args: Arguments from user
 * @env: Environment
 * Return: Void
 * **/

void exit_shell(char **args, char *line, char **env)
{
	free(args);
	free(line);
	(void)env;
	exit(0);
}
